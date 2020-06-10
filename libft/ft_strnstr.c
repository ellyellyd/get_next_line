/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 20:05:33 by fcatina           #+#    #+#             */
/*   Updated: 2019/05/07 23:27:48 by fcatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *haystack, char const *needle, size_t len)
{
	unsigned int		i;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i + ft_strlen(needle) - 1] != '\0' && i < len)
	{
		while (haystack[i] != needle[0] && i < len)
			i++;
		if (ft_strncmp((haystack + i), needle, ft_strlen(needle)) == 0 \
				&& i + ft_strlen(needle) <= len && i <= ft_strlen(haystack))
		{
			return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
