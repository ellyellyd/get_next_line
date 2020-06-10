/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 05:27:08 by fcatina           #+#    #+#             */
/*   Updated: 2019/04/16 05:47:00 by fcatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	size_t		i;
	size_t		l;

	l = 0;
	i = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[l] != '\0' && l < n)
	{
		s1[i] = s2[l];
		i++;
		l++;
	}
	s1[i] = '\0';
	return (s1);
}
