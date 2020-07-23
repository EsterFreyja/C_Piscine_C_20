/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenhez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 22:39:48 by adenhez           #+#    #+#             */
/*   Updated: 2020/07/19 23:39:45 by adenhez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hash.h"
#include "ft_strings.h"
#include "ft_error.h"
#include "ft_read_file.h"

int	input_error(char *str, t_item *hash)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!exist(hash, &str[i]))
			return (1);
		if (str[i] < '0' && str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

int	ft_args_errors(int argc)
{
	if (argc == 2 || argc == 3)
		return (0);
	return (1);
}

int	ft_dict_errors(t_item *hash, char *path, char **argv, int argc)
{
	char *str;

	str = argc == 3 ? argv[2] : argv[1];
	if (ft_file_error(path))
	{
		ft_putstr(DICT_ERROR);
		return (1);
	}
	if (ft_wrong_duplicate_data(hash) || ft_wrong_duplicate_key(hash))
	{
		ft_putstr(DICT_ERROR);
		return (1);
	}
	return (0);
}
