/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_w.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachqar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 20:35:06 by hlachqar          #+#    #+#             */
/*   Updated: 2020/12/20 03:02:15 by hlachqar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	manage_w(char **format, va_list args)
{
	while (**format == ' ')
	{
		write(1, " ", 1);
		(*format)++;
	}
	if (**format == '*')
	{
		g_global.w = va_arg(args, int);
		if (g_global.w < 0)
			g_global.f = '-';
		while (**format == '*')
			(*format)++;
	}
	else
	{
		g_global.w = ft_atoi(*format);
		while (ft_isdigit(**format))
			(*format)++;
	}
	if (g_global.w < 0)
	{
		g_global.w = g_global.w * -1;
		g_global.f = '-';
	}
}
