/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloiret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 09:23:40 by vloiret           #+#    #+#             */
/*   Updated: 2020/07/04 10:50:28 by vloiret          ###   ########.fr       */
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
			if ((i == 1 || i == x) && (j == 1))
				ft_putchar('A');
			else if (i != 1 && j != 1 && i != x && j != y)
				ft_putchar(' ');
			else if (j == y && (i == 1 || i == x))
				ft_putchar('C');
			else
				ft_putchar('B');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
