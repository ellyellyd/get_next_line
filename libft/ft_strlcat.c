/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 19:47:33 by fcatina           #+#    #+#             */
/*   Updated: 2019/05/07 23:11:22 by fcatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ssrc - size of src
** sdst - size of dst
*/

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		ssrc;
	size_t		sdst;

	sdst = ft_strlen(dst) + 1;
	ssrc = ft_strlen(src) + 1;
	if (size < sdst)
		return (ssrc - 1 + size);
	else
	{
		i = 0;
		while (src[i] && sdst + i < size)
		{
			dst[sdst - 1 + i] = src[i];
			i++;
		}
		dst[sdst - 1 + i] = '\0';
		return (ssrc - 1 + sdst - 1);
	}
}
