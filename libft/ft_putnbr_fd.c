/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachqar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 16:07:05 by hlachqar          #+#    #+#             */
/*   Updated: 2019/11/27 16:07:07 by hlachqar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long counter;

	counter = n;
	if (counter < 0)
	{
		counter = -counter;
		ft_putchar_fd(45, fd);
	}
	if (counter > 9)
	{
		ft_putnbr_fd(counter / 10, fd);
		ft_putchar_fd(counter % 10 + 48, fd);
	}
	if (counter <= 9 && counter >= 0)
	{
		ft_putchar_fd(counter + 48, fd);
	}
}
