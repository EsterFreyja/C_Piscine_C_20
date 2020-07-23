/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 15:46:36 by tmartine          #+#    #+#             */
/*   Updated: 2020/07/18 15:05:42 by tmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_params(int argc, char *argv[])
{
	int		i;
	char	*buf;

	i = 2;
	while (i < argc)
	{
		if (ft_strcmp(argv[i - 1], argv[i]) > 0)
		{
			buf = argv[i - 1];
			argv[i - 1] = argv[i];
			argv[i] = buf;
			i = 1;
		}
		i++;
	}
}

void	ft_print_params(int argc, char *argv[])
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			j++;
		write(1, argv[i], j);
		write(1, "\n", 1);
		i++;
	}
}

int		main(int argc, char *argv[])
{
	ft_sort_params(argc, argv);
	ft_print_params(argc, argv);
	return (0);
}
