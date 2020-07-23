/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtrack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelhomm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 07:22:42 by tbelhomm          #+#    #+#             */
/*   Updated: 2020/07/12 07:28:43 by tbelhomm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	ft_is_valid_value(char **tab, int x, int y, int size)
{
	if (ft_is_duplicate(tab, x, y, size))
		return (0);
	if (ft_check_col(tab, x, 1, size) > tab[x][size])
		return (0);
	if (y == size - 1 && ft_check_col(tab, x, -1, size) != tab[x][size + 1])
		return (0);
	if (ft_check_row(tab, y, 1, size) > tab[y][size + 2])
		return (0);
	if (x == size - 1 && ft_check_row(tab, y, -1, size) != tab[y][size + 3])
		return (0);
	return (1);
}

int	ft_backtrack(char **tab, int n, int size)
{
	int i;
	int x;
	int y;

	if (n == size * size)
		return (1);
	i = 0;
	x = n % size;
	y = n / size;
	while (++i <= size)
	{
		tab[y][x] = i;
		ft_print_tab(tab, 4);
		ft_putchar('\n');
		if (ft_is_valid_value(tab, x, y, size))
		{
			if (ft_backtrack(tab, n + 1, size))
				return (1);
			tab[y][x] = 0;
		}
	}
	tab[y][x] = 0;
	return (0);
}

int	ft_solve(char **tab, int size)
{
	int i;

	i = -1;
	while (++i < size)
		if (tab[i][size] + tab[i][size + 1] > size + 1
			|| tab[i][size + 2] + tab[i][size + 3] > size + 1)
			return (0);
	return (ft_backtrack(tab, 0, size));
}
