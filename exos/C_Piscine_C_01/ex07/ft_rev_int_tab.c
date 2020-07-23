/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 14:33:11 by tmartine          #+#    #+#             */
/*   Updated: 2020/07/05 17:42:43 by tmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int buf;

	size--;
	i = 0;
	j = size;
	while (i <= size)
	{
		buf = tab[i];
		tab[i] = tab[j];
		tab[j] = buf;
		i++;
		j--;
		if (i >= j)
			return ;
	}
}
