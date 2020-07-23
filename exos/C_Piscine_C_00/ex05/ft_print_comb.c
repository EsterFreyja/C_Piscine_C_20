/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 13:29:54 by tmartine          #+#    #+#             */
/*   Updated: 2020/07/02 16:28:26 by tmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	ft_sec(char i, char j, char k);

void	ft_sec(char i, char j, char k)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
	if (i < 55)
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = 48;
	j = i + 1;
	k = j + 1;
	while (i <= 55)
	{
		while (j <= 56)
		{
			while (k <= 57)
			{
				ft_sec(i, j, k);
				k++;
			}
			j++;
			k = j + 1;
		}
		i++;
		j = i + 1;
		k = j + 1;
	}
}
