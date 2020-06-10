/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 18:39:52 by fcatina           #+#    #+#             */
/*   Updated: 2019/05/14 20:11:46 by fcatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	n;
	size_t	i;

	i = 0;
	n = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c)
			i++;
		n++;
	}
	return (n);
}

static size_t	ft_strlen_delim(char const *str, char delim)
{
	size_t	i;

	i = 0;
	while (1)
	{
		if (str[i] == delim || str[i] == '\0')
			return (i);
		i++;
	}
	return (0);
}

static size_t	find_delim(char const *s, char c, size_t i)
{
	while (s[i] == c)
		i++;
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**ptr;
	size_t	n;
	size_t	i;
	size_t	j;
	size_t	len;

	n = ft_count_words(s, c);
	ptr = (char **)malloc(sizeof(char *) * (n + 1));
	if (ptr)
	{
		ptr[n] = NULL;
		i = find_delim(s, c, 0);
		j = 0;
		while (s[i] && j < n)
		{
			len = ft_strlen_delim(s + i, c);
			ptr[j] = ft_strsub(s + i, 0, len);
			j++;
			i += len;
			i = find_delim(s, c, i);
		}
		return (ptr);
	}
	return (NULL);
}
