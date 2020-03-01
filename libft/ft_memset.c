/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachqar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 16:06:28 by hlachqar          #+#    #+#             */
/*   Updated: 2020/02/02 19:55:43 by hlachqar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			counter;

	str = (unsigned char *)s;
	counter = 0;
	while (counter < n)
	{
		str[counter] = (unsigned char)c;
		counter++;
	}
	s = (void *)str;
	return (str);
}
