/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_n_zr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachqar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 20:37:41 by hlachqar          #+#    #+#             */
/*   Updated: 2020/12/19 20:37:42 by hlachqar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		ft_get_n_zr(long long num)
{
	if (g_global.p < ft_get_num(num, 10))
		return (0);
	else
		return (g_global.p - ft_get_num(num, 10));
}
