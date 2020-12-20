/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachqar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 20:37:55 by hlachqar          #+#    #+#             */
/*   Updated: 2020/12/19 20:37:56 by hlachqar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int			ft_get_num(long long n, unsigned int base)
{
	int			num;

	if (n == 0)
		return (1);
	num = 0;
	while (n != 0)
	{
		n /= base;
		num++;
	}
	return (num);
}
