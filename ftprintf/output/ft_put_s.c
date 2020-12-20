/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachqar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 20:37:02 by hlachqar          #+#    #+#             */
/*   Updated: 2020/12/19 20:37:03 by hlachqar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int			ft_put_s(va_list args)
{
	int			res;
	char		*str;

	if (!(str = va_arg(args, char*)))
		str = "(null)";
	if (g_global.p < ft_strlen(str) && g_global.p >= 0)
		res = g_global.p;
	else
		res = ft_strlen(str);
	while (g_global.f != '-' && g_global.w > res++)
		write(1, " ", 1);
	if (g_global.p < ft_strlen(str) && g_global.p >= 0)
		write(1, str, g_global.p);
	else
		write(1, str, ft_strlen(str));
	while (g_global.f == '-' && g_global.w > res++)
		write(1, " ", 1);
	return (--res);
}
