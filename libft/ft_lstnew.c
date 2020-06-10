/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 18:33:32 by fcatina           #+#    #+#             */
/*   Updated: 2019/05/14 18:33:35 by fcatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*cur;

	cur = (t_list *)malloc(sizeof(t_list));
	if (!cur)
		return (NULL);
	if (content == NULL)
	{
		cur->content = NULL;
		cur->content_size = 0;
	}
	else
	{
		cur->content = ft_memmove(ft_memalloc(content_size), \
					content, content_size);
		cur->content_size = content_size;
	}
	cur->next = NULL;
	return (cur);
}
