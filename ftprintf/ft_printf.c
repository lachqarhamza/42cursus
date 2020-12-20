/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachqar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 20:30:41 by hlachqar          #+#    #+#             */
/*   Updated: 2020/12/19 20:30:43 by hlachqar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_printf(char *format, ...)
{
	va_list			args;

	va_start(args, format);
	g_counter = 0;
	ft_init_globals();
	while (*format)
	{
		if (*format != '%')
			ft_put_char(&format);
		else
		{
			manage_f(&format);
			manage_w(&format, args);
			manage_p(&format, args);
			manage_c(&format, args);
		}
	}
	va_end(args);
	return (g_counter);
}
