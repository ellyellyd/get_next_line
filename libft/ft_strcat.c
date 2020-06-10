/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 02:09:36 by fcatina           #+#    #+#             */
/*   Updated: 2019/04/16 02:23:20 by fcatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int		i;
	int		l;

	l = 0;
	i = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[l] != '\0')
	{
		s1[i] = s2[l];
		l++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
