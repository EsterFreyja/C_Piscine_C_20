/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 11:51:05 by tmartine          #+#    #+#             */
/*   Updated: 2020/07/20 00:11:49 by tmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*array;
	long	i;

	i = 0;
	if (min >= max)
		return (0);
	array = (int *)malloc(sizeof(int) * (max - min));
	if (!(array))
		return (0);
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
