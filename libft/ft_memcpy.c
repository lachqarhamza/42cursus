/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachqar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 16:06:09 by hlachqar          #+#    #+#             */
/*   Updated: 2019/11/27 16:53:46 by hlachqar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	size_t	counter;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	counter = 0;
	while (counter < n && (dst || src))
	{
		d[counter] = s[counter];
		counter++;
	}
	dst = (void *)d;
	return (dst);
}
