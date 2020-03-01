/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachqar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 16:10:17 by hlachqar          #+#    #+#             */
/*   Updated: 2020/02/02 20:04:26 by hlachqar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	check(char const *s, char set)
{
	int counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		if (s[counter] == set)
			return (1);
		counter++;
	}
	return (0);
}

static	int	cal_size(char const *s, char const *set)
{
	int c1;
	int c2;

	c1 = 0;
	c2 = ft_strlen(s) - 1;
	while (s[c1] != '\0')
	{
		if (check(set, s[c1]) == 1)
			c1++;
		else
			break ;
	}
	while (c2 >= 0)
	{
		if (check(set, s[c2]) == 1)
		{
			c1++;
			c2--;
		}
		else
			break ;
	}
	return (c1);
}

char		*ft_strtrim(char const *s, char const *set)
{
	char	*temp;
	int		c1;
	int		c2;
	int		size;

	if (!s)
		return (NULL);
	if (cal_size(s, set) > (int)ft_strlen(s))
	{
		if (!(temp = malloc(sizeof(char) * (1))))
			return (NULL);
		temp[0] = '\0';
		return (temp);
	}
	size = ft_strlen(s) - cal_size(s, set);
	c1 = 0;
	c2 = 0;
	if (!(temp = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (check(set, s[c1]) == 1)
		c1++;
	while (c2 < size)
		temp[c2++] = (char)s[c1++];
	temp[c2] = '\0';
	return (temp);
}
