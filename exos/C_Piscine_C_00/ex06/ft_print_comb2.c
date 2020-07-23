/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 15:17:44 by tmartine          #+#    #+#             */
/*   Updated: 2020/07/02 21:01:35 by tmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_itoa(int i);
void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (i <= 98)
	{
		while (j <= 99)
		{
			if (i != j)
			{
				ft_itoa(i);
				write(1, " ", 1);
				ft_itoa(j);
				if (i < 98)
					write(1, ", ", 2);
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}

void	ft_itoa(int i)
{
	char a;
	char b;

	a = (i / 10) + 48;
	write(1, &a, 1);
	b = (i % 10) + 48;
	write(1, &b, 1);
}
