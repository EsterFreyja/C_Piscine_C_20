/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelhomm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 07:21:11 by tbelhomm          #+#    #+#             */
/*   Updated: 2020/07/12 07:21:16 by tbelhomm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		ft_is_valid(char *str, int size)
{
	int i;
	int j;

	i = -1;
	j = size / 4;
	while (++i < size)
	{
		if (*str < '1' || *str > '4')
			return (0);
		str += 2;
	}
	return (j);
}

int		ft_get_size(char *str)
{
	int size;
	int i;

	size = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '4')
			size++;
		else
			return (0);
		if (str[++i] == ' ' && !str[++i])
			return (0);
	}
	return ((size != 16) ? 0 : ft_is_valid(str, size));
}
