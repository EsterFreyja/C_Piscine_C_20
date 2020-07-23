/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenhez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 12:52:31 by adenhez           #+#    #+#             */
/*   Updated: 2020/07/19 23:23:21 by adenhez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hash.h"
#include "ft_read_file.h"
#include "ft_strings.h"
#include "ft_error.h"
#include "ft_process.h"

int	main(int argc, char **argv)
{
	t_item	*hash;
	char	*path;
	char	*n;

	if (ft_args_errors(argc))
		return (0);
	n = argc == 3 ? argv[2] : argv[1];
	path = argc == 3 ? argv[1] : "./numbers.dict";
	if (ft_file_error(path))
		return (0);
	set_hash(&hash, path);
	if (ft_dict_errors(hash, path, argv, argc))
		return (0);
	ft_process(hash, n);
	ft_putstr("\n");
	free_item(&hash);
	return (0);
}
