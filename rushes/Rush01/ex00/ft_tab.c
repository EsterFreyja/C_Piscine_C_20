/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelhomm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 07:21:28 by tbelhomm          #+#    #+#             */
/*   Updated: 2020/07/12 07:29:33 by tbelhomm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_rush.h"

char	**ft_init_tab(char *params, int size)
{
	char	**tab;
	int		x;
	int		y;

	if (!(tab = malloc(size * sizeof(char*))))
		return (NULL);
	y = -1;
	while (++y < size)
	{
		if (!(tab[y] = malloc((size + 4) * sizeof(char))))
			return (NULL);
		x = -1;
		while (++x < size)
			tab[y][x] = 0;
		x = -1;
		while (++x < 4)
		{
			tab[y][size + x] = params[2 * (y + x * size)] - '0';
		}
	}
	return (tab);
}

void	ft_destroy_tab(char **tab, int size)
{
	while (size--)
		free(tab[size]);
	free(tab);
}

void	ft_print_tab(char **tab, int size)
{
	int x;
	int y;

	y = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			ft_putchar(tab[y][x] + '0');
			if (++x < size)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		y++;
	}
}
