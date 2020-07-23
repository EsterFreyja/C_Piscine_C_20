/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloiret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 09:23:40 by vloiret           #+#    #+#             */
/*   Updated: 2020/07/05 19:08:45 by tmartine         ###   ########.fr       */
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
			if ((i == 1 || i == x) && (j == 1) || j == y && (i == 1 || i == x))
				ft_putchar('o');
			else if (i != 1 && j != 1 && i != x && j != y)
				ft_putchar(' ');
			else if (i == 1 || i == x)
				ft_putchar('|');
			else
				ft_putchar('-');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
