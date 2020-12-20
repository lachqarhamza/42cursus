/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upper.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachqar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 20:40:20 by hlachqar          #+#    #+#             */
/*   Updated: 2020/12/19 20:40:22 by hlachqar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_upper(char *str)
{
	int		i;
	char	*res;

	i = 0;
	if (!(res = (char*)malloc((ft_strlen(str) + 1) * sizeof(char))))
		return (NULL);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			res[i] = str[i] - 32;
		else
			res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
