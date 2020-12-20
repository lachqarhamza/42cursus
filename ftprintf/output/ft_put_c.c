/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_c.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachqar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 20:36:29 by hlachqar          #+#    #+#             */
/*   Updated: 2020/12/19 20:36:31 by hlachqar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int			ft_put_c(va_list args)
{
	char		c;
	int			res;

	res = 1;
	c = va_arg(args, int);
	while (g_global.f != '-' && g_global.w > res++)
		write(1, " ", 1);
	write(1, &c, 1);
	while (g_global.f == '-' && g_global.w > res++)
		write(1, " ", 1);
	return (--res);
}
