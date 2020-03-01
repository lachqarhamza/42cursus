/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachqar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 16:05:18 by hlachqar          #+#    #+#             */
/*   Updated: 2020/02/02 19:46:15 by hlachqar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int		i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	long	n1;
	long	n2;
	char	*str;

	n1 = n;
	n2 = ft_len(n);
	if (n1 < 0)
		n1 = -n1;
	if (!(str = malloc((n2 + 1) * sizeof(char))))
		return (NULL);
	str[n2] = '\0';
	if (n1 == 0)
		str[n2 - 1] = '0';
	while (n1 != 0)
	{
		str[n2 - 1] = ((n1 % 10) + 48);
		n1 = n1 / 10;
		n2--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
