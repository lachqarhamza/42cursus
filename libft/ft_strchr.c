/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachqar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 16:07:43 by hlachqar          #+#    #+#             */
/*   Updated: 2019/11/27 17:09:33 by hlachqar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int k;

	k = 0;
	while (s[k])
	{
		if ((char)s[k] == (char)c)
			return ((char *)s + k);
		k++;
	}
	if (s[k] == c)
		return ((char *)s + k);
	return (NULL);
}
