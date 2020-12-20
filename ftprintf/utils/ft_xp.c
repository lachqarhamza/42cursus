/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xp.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachqar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 20:38:51 by hlachqar          #+#    #+#             */
/*   Updated: 2020/12/19 20:38:52 by hlachqar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void		ft_xp(char *str, int *i, int *j)
{
	char	*s;

	if (g_global.c == 'p')
		write(1, "0x", 2);
	ft_zero_padding(i, j);
	if (!ft_strncmp(str, "0", 2) && g_global.pnt > 0
	&& !g_global.p)
	{
	}
	else
	{
		if (g_global.c == 'x' || g_global.c == 'p')
		{
			write(1, str, ft_strlen(str));
		}
		else
		{
			s = ft_upper(str);
			write(1, s, ft_strlen(s));
			free(s);
			s = NULL;
		}
	}
}
