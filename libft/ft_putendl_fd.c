/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 01:11:03 by fcatina           #+#    #+#             */
/*   Updated: 2019/04/23 18:24:35 by fcatina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *str, int fd)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar_fd(str[i++], fd);
	ft_putchar_fd('\n', fd);
}
