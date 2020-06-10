/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 18:34:52 by fcatina           #+#    #+#             */
/*   Updated: 2019/05/14 18:34:57 by fcatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*root;

	if (!(new = f(ft_lstnew(lst->content, lst->content_size))))
		return (NULL);
	root = new;
	lst = lst->next;
	while (lst)
	{
		if (!(new->next = f(ft_lstnew(lst->content, lst->content_size))))
			return (NULL);
		new = new->next;
		lst = lst->next;
	}
	return (root);
}
