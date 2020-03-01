/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachqar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 16:03:23 by hlachqar          #+#    #+#             */
/*   Updated: 2019/11/27 16:03:29 by hlachqar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int j;
	int x;

	i = 0;
	x = 1;
	j = 0;
	while ((str[i] >= 6 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == 45 || str[i] == '+')
	{
		if (str[i] == '-')
			x = -1;
		i++;
	}
	while (*(str + i) >= 48 && *(str + i) <= 57 && str[i] != '\0')
	{
		j = j * 10 + str[i] - 48;
		i++;
	}
	return (j * x);
}
