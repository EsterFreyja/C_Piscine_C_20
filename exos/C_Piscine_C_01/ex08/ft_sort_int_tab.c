/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 16:01:33 by tmartine          #+#    #+#             */
/*   Updated: 2020/07/05 17:45:34 by tmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int buf;

	i = 0;
	j = 0;
	while (j != size)
	{
		while (i != size)
		{
			if (tab[i] > tab[j])
			{
				buf = tab[i];
				tab[i] = tab[j];
				tab[j] = buf;
				i++;
			}
			else
				i++;
		}
		i = 0;
		j++;
	}
}
