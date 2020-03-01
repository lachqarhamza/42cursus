/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachqar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 16:05:34 by hlachqar          #+#    #+#             */
/*   Updated: 2020/02/02 19:54:41 by hlachqar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*dest;
	char	*source;
	size_t	counter;

	dest = (char *)dst;
	source = (char *)src;
	counter = 0;
	while (counter < n)
	{
		dest[counter] = source[counter];
		if (source[counter] == (unsigned char)c)
			return ((void *)(dest + counter + 1));
		counter++;
	}
	return (NULL);
}
