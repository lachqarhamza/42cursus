/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero_padding.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachqar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 20:39:01 by hlachqar          #+#    #+#             */
/*   Updated: 2020/12/19 20:39:03 by hlachqar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void		ft_zero_padding(int *res, int *nzr)
{
	while ((*nzr)--)
		write(1, "0", 1);
	if (g_global.f == '0' && g_global.p < 0)
		while (g_global.w > (*res)++)
			write(1, "0", 1);
}
