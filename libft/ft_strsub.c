/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 18:26:15 by fcatina           #+#    #+#             */
/*   Updated: 2019/05/14 18:31:39 by fcatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*str;

	str = ft_strnew(len);
	i = start;
	j = 0;
	if (str && len <= (ft_strlen(s) - start + 1))
	{
		while (j < len)
		{
			str[j] = s[i];
			j++;
			i++;
		}
		return (str);
	}
	return (0);
}
