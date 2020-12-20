/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_c.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachqar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 20:34:25 by hlachqar          #+#    #+#             */
/*   Updated: 2020/12/20 02:13:14 by hlachqar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	manage_c(char **format, va_list args)
{
	if (ft_is_c(**format))
	{
		g_global.c = **format;
		g_counter += ft_manage(args);
		ft_init_globals();
	}
	if (**format != '\0')
		(*format)++;
}
