/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenhez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 21:31:14 by adenhez           #+#    #+#             */
/*   Updated: 2020/07/19 22:24:33 by adenhez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strings.h"
#include "ft_hash.h"
#include "ft_process.h"

void	ft_process(t_item *hash, char *str)
{
	int	size;
	int	i;

	size = ft_strlen(str);
	i = 0;
	while (i < size)
	{
		if (str[i] == '0')
			i++;
		else if ((size - i) % 3 == 0)
			i += display_hundred(hash, i, str, size);
		else if ((size - i) % 3 == 2)
		{
			if (str[i] == '0')
				i++;
			else
				i += display_ten(hash, i, str, size);
		}
		else
		{
			display_unity(hash, i, str, size);
			i++;
		}
	}
}
