/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloiret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 09:23:40 by vloiret           #+#    #+#             */
/*   Updated: 2020/07/05 19:08:59 by tmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;

	j = 1;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if (i == 1 && j == 1 || i == x && j == y)
				ft_putchar('/');
			else if (i != 1 && j != 1 && i != x && j != y)
				ft_putchar(' ');
			else if (i == 1 && j == y || i == x && j == 1)
				ft_putchar('\\');
			else
				ft_putchar('*');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
