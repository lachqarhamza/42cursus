/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_per.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachqar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 20:36:54 by hlachqar          #+#    #+#             */
/*   Updated: 2020/12/20 17:11:27 by hlachqar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		ft_put_per(void)
{
	int			res;

	res = 1;
	while (g_global.f == '0' && g_global.w > res)
	{
		write(1, "0", 1);
		res++;
	}
	while (g_global.f != '-' && g_global.w > res)
	{
		write(1, " ", 1);
		res++;
	}
	write(1, "%", 1);
	while (g_global.f == '-' && g_global.w > res)
	{
		write(1, " ", 1);
		res++;
	}
	g_global.c = '\0';
	return (res);
}
