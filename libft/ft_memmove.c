/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 20:07:27 by fcatina           #+#    #+#             */
/*   Updated: 2019/05/07 21:03:46 by fcatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;
	int				i;

	s = (unsigned char *)src;
	d = (src != dst) ? ((unsigned char *)dst) : (NULL);
	i = (src > dst) ? (0) : ((int)len - 1);
	if (src > dst)
	{
		while (i != (int)len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else if (src < dst)
	{
		while (i >= 0)
		{
			d[i] = s[i];
			i--;
		}
	}
	return (dst);
}
