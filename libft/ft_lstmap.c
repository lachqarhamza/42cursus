/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachqar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 19:50:06 by hlachqar          #+#    #+#             */
/*   Updated: 2020/02/09 19:58:46 by hlachqar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *n;
	t_list *hold;

	if (!lst)
		return (NULL);
	n = ft_lstnew(f(lst->content));
	if (!n)
		return (NULL);
	hold = n;
	lst = lst->next;
	while (lst)
	{
		if (!(n->next = ft_lstnew(f(lst->content))))
			ft_lstclear(&hold, del);
		n = n->next;
		lst = lst->next;
	}
	return (hold);
}
