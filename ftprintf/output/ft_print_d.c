/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachqar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 20:36:08 by hlachqar          #+#    #+#             */
/*   Updated: 2020/12/19 20:36:10 by hlachqar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_print_d(long long num)
{
	char		*str;

	str = ft_itoa_base(num, 10);
	write(1, str, ft_get_num((int)num, 10));
	free(str);
	str = NULL;
}
