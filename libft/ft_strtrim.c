/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 18:39:37 by fcatina           #+#    #+#             */
/*   Updated: 2019/05/14 18:42:38 by fcatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = ft_strdup(s);
	if (str)
	{
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		str = str + i;
		i = ft_strlen(str) - 1;
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			str[i] = '\0';
			i--;
		}
	}
	else
		return (NULL);
	str = ft_strdup(str);
	return (str ? str : NULL);
}
