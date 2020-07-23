/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conditions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelhomm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 07:22:11 by tbelhomm          #+#    #+#             */
/*   Updated: 2020/07/12 07:22:14 by tbelhomm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_col(char **tab, int x, int delta, int size)
{
	int y;
	int max;
	int hmax;
	int height;

	y = (delta > 0) ? 0 : size - 1;
	max = (delta > 0) ? size : -1;
	hmax = 0;
	height = 0;
	while (y != max)
	{
		if (!tab[y][x])
			return (0);
		if (tab[y][x] > hmax)
		{
			hmax = tab[y][x];
			height++;
		}
		y += delta;
	}
	return (height);
}

int	ft_check_row(char **tab, int y, int delta, int size)
{
	int x;
	int max;
	int hmax;
	int height;

	x = (delta > 0) ? 0 : size - 1;
	max = (delta > 0) ? size : -1;
	hmax = 0;
	height = 0;
	while (x != max)
	{
		if (tab[y][x] > hmax)
		{
			hmax = tab[y][x];
			height++;
		}
		x += delta;
	}
	return (height);
}

int	ft_is_duplicate(char **tab, int x, int y, int size)
{
	int i;

	if (!tab[y][x])
		return (0);
	i = y;
	while (i--)
		if (tab[y][x] == tab[i][x])
			return (1);
	i = y;
	while (++i < size)
		if (tab[y][x] == tab[i][x])
			return (1);
	i = x;
	while (i--)
		if (tab[y][x] == tab[y][i])
			return (1);
	i = x;
	while (++i < size)
		if (tab[y][x] == tab[y][i])
			return (1);
	return (0);
}
