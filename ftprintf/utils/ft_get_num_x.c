/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_num_x.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachqar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 20:38:04 by hlachqar          #+#    #+#             */
/*   Updated: 2020/12/19 20:38:05 by hlachqar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int			ft_get_num_x(unsigned long long n, unsigned int base)
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
