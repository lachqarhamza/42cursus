/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachqar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 16:08:24 by hlachqar          #+#    #+#             */
/*   Updated: 2020/02/02 19:39:06 by hlachqar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t k;
	size_t len;

	if (size == 0)
		return (ft_strlen(src));
	len = 0;
	i = ft_strlen(dst);
	j = ft_strlen(src);
	k = i + j;
	if (size < i)
		k = size + j;
	if (size > i)
	{
		while (((i + len) < (size - 1)) && src[len])
		{
			dst[i + len] = src[len];
			len++;
		}
		dst[i + len] = '\0';
	}
	return (k);
}
