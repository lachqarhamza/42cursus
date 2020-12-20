/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachqar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 20:34:12 by hlachqar          #+#    #+#             */
/*   Updated: 2020/12/19 20:34:14 by hlachqar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int			ft_manage(va_list args)
{
	if (g_global.c == 'u')
		return (ft_put_u(args));
	if (g_global.c == 's')
		return (ft_put_s(args));
	if (g_global.c == 'c')
		return (ft_put_c(args));
	if (g_global.c == 'x' || g_global.c == 'X' || g_global.c == 'p')
		return (ft_put_x(args));
	if (g_global.c == 'd' || g_global.c == 'i')
		return (ft_put_d(args));
	if (g_global.c == '%')
		return (ft_put_per());
	else
		return (0);
}
