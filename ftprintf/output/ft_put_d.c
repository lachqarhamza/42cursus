/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachqar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 20:36:45 by hlachqar          #+#    #+#             */
/*   Updated: 2020/12/19 20:36:46 by hlachqar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int			ft_put_d(va_list args)
{
	int			nzr;
	int			res;
	long long	num;

	num = (long long)va_arg(args, int);
	nzr = ft_get_n_zr(num);
	res = nzr + ft_get_num((int)num, 10);
	if (num < 0)
		res++;
	if (num == 0 && g_global.p == 0)
		res = 0;
	ft_space_padding(&res);
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
	}
	ft_zero_padding(&res, &nzr);
	if (num != 0 || g_global.p != 0)
		ft_print_d(num);
	while (g_global.f == '-' && g_global.w > res++)
		write(1, " ", 1);
	return (--res);
}
