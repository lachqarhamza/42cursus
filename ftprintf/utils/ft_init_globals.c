/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_globals.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachqar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 20:38:19 by hlachqar          #+#    #+#             */
/*   Updated: 2020/12/20 03:04:11 by hlachqar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

t_globals	g_global;
int			g_counter;

void	ft_init_globals(void)
{
	g_global.c = '\0';
	g_global.f = '\0';
	g_global.w = -1;
	g_global.p = -1;
	g_global.pnt = -1;
	g_counter = 0;
}
