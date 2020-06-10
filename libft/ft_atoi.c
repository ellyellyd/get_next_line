/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 21:06:13 by fcatina           #+#    #+#             */
/*   Updated: 2019/04/22 21:55:05 by fcatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		l;
	int		res;
	int		s;

	res = 0;
	i = 0;
	s = 1;
	l = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == ' ' || \
						str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-')
	{
		s = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && l <= 20)
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res * s);
}
