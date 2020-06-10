/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 18:58:32 by fcatina           #+#    #+#             */
/*   Updated: 2019/05/14 18:36:14 by fcatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src,
		int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	cc;
	size_t			i;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	cc = (unsigned char)c;
	while (s[i] != cc && i < n)
	{
		d[i] = s[i];
		i++;
	}
	if (s[i] == cc)
	{
		d[i] = s[i];
		return (d + i + 1);
	}
	else
		return (NULL);
}
