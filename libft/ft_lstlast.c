/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachqar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 19:49:51 by hlachqar          #+#    #+#             */
/*   Updated: 2020/02/02 19:51:53 by hlachqar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int len;

	len = ft_lstsize(lst);
	while (len-- && lst->next != NULL)
		lst = lst->next;
	return (lst);
}
