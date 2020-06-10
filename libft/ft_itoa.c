/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 18:37:31 by fcatina           #+#    #+#             */
/*   Updated: 2019/05/14 20:04:52 by fcatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*handle_negative(int n)
{
	char	*str;
	int		i;
	int		nn;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	nn = -n;
	i = 1;
	while (nn /= 10)
		i++;
	str = ft_strnew(i + 1);
	if (str)
	{
		str[0] = '-';
		str[i + 1] = '\0';
		n = -n;
		while (i >= 1)
		{
			str[i--] = (n % 10) + '0';
			n /= 10;
		}
		return (str);
	}
	return (NULL);
}

static char		*handle_positive(int n)
{
	char	*str;
	int		i;
	int		nn;

	nn = n;
	i = 0;
	while (nn /= 10)
		i++;
	str = ft_strnew(i + 1);
	if (str)
	{
		str[i + 1] = '\0';
		while (i >= 0)
		{
			str[i--] = (n % 10) + '0';
			n /= 10;
		}
		return (str);
	}
	return (NULL);
}

static char		*handle_zero(void)
{
	char	*str;

	str = ft_strnew(1);
	if (str)
	{
		str[0] = '0';
		return (str);
	}
	return (NULL);
}

char			*ft_itoa(int n)
{
	char	*str;

	if (n == 0)
		str = handle_zero();
	else if (n < 0)
		str = handle_negative(n);
	else
		str = handle_positive(n);
	return (str);
}
