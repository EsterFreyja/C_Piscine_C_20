/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelhomm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 07:21:38 by tbelhomm          #+#    #+#             */
/*   Updated: 2020/07/12 07:29:24 by tbelhomm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int		main(int argc, char **argv)
{
	char	**tab;
	int		size;

	if (argc != 2 || !(size = ft_get_size(argv[1])))
		ft_putstr("Error");
	else if ((tab = ft_init_tab(argv[1], size)))
	{
		if (ft_solve(tab, size))
			ft_print_tab(tab, size);
		else
			ft_putstr("Error");
		ft_destroy_tab(tab, size);
	}
	else
		ft_putstr("Error");
	return (0);
}
