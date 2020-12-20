/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachqar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 20:34:45 by hlachqar          #+#    #+#             */
/*   Updated: 2020/12/20 02:59:11 by hlachqar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	manage_p(char **format, va_list args)
{
	if (**format == '.')
	{
		(*format)++;
		if (**format == '*')
		{
			g_global.p = va_arg(args, int);
			while (**format == '*')
				(*format)++;
		}
		else
		{
			g_global.p = ft_atoi(*format);
			while (ft_isdigit(**format))
				(*format)++;
		}
		g_global.pnt = 1;
	}
}
