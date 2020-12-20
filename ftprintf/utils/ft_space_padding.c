/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_space_padding.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachqar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 20:38:43 by hlachqar          #+#    #+#             */
/*   Updated: 2020/12/19 20:38:44 by hlachqar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void		ft_space_padding(int *res)
{
	if (g_global.f == '\0')
		while (g_global.w > (*res)++)
			write(1, " ", 1);
	if (g_global.f == '0' && g_global.p >= 0)
		while (g_global.w > (*res)++)
			write(1, " ", 1);
}
