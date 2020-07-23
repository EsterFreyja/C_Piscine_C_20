/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenhez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 18:13:49 by adenhez           #+#    #+#             */
/*   Updated: 2020/07/19 22:27:39 by adenhez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strings.h"
#include "ft_hash.h"
#include "ft_process.h"

char	*fill_dimension(int size)
{
	char	*str;
	int		i;

	i = 1;
	if (!(str = (char*)malloc(sizeof(char) * (size + 2))))
		return (NULL);
	str[0] = '1';
	while (i < size)
	{
		str[i] = '0';
		i++;
	}
	str[i] = '\0';
	return (str);
}

void	display_dimension(t_item *hash, int i, int size)
{
	char *dimension;

	dimension = fill_dimension(size - i);
	if (exist(hash, dimension) &&
			ft_strcmp(dimension, "1") && ft_strcmp(dimension, "10") &&
			ft_strcmp(dimension, "100"))
	{
		ft_putstr(search(hash, dimension)->data);
		if (size - 1 != i)
			ft_putstr(" ");
	}
	free(dimension);
}

int		display_hundred(t_item *hash, int i, char *str, int size)
{
	char tmp[2];

	tmp[0] = str[i];
	tmp[1] = '\0';
	ft_putstr(search(hash, tmp)->data);
	ft_putstr(" ");
	ft_putstr(search(hash, "100")->data);
	if (size - 2 != i)
		ft_putstr(" ");
	display_dimension(hash, i + 2, size);
	return (1);
}

int		display_ten(t_item *hash, int i, char *str, int size)
{
	char tmp[3];

	if (str[i] == '1' || (str[i] == '2' && str[i + 1] == '0'))
	{
		tmp[0] = str[i];
		tmp[1] = str[i + 1];
		tmp[2] = '\0';
		ft_putstr(search(hash, tmp)->data);
		if (size - 2 != i)
			ft_putstr(" ");
		display_dimension(hash, i + 1, size);
		return (2);
	}
	tmp[0] = str[i];
	tmp[1] = '0';
	tmp[2] = '\0';
	ft_putstr(search(hash, tmp)->data);
	ft_putstr(" ");
	tmp[0] = str[i + 1];
	tmp[1] = '\0';
	ft_putstr(search(hash, tmp)->data);
	if (size - 2 != i)
		ft_putstr(" ");
	display_dimension(hash, i + 1, size);
	return (2);
}

int		display_unity(t_item *hash, int i, char *str, int size)
{
	char tmp[2];

	tmp[0] = str[i];
	tmp[1] = '\0';
	ft_putstr(search(hash, tmp)->data);
	if (size - 1 != i)
		ft_putstr(" ");
	display_dimension(hash, i, size);
	return (1);
}
