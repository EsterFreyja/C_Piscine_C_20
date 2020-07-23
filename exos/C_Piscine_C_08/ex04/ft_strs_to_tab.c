/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 12:37:08 by tmartine          #+#    #+#             */
/*   Updated: 2020/07/21 14:18:17 by tmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	int		i;
	char	*s1;

	i = 0;
	while (src[i])
		i++;
	s1 = (char *)malloc((i + 1) * sizeof(char));
	if (!(s1))
		return (0);
	i = 0;
	while (src[i])
	{
		s1[i] = src[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *pouet;
	int			i;

	i = 0;
	pouet = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!(pouet))
		return (NULL);
	while (i < ac)
	{
		pouet[i].size = ft_strlen(av[i]);
		pouet[i].str = av[i];
		pouet[i].copy = ft_strdup(pouet[i].str);
		i++;
	}
	pouet[ac].str = 0;
	return (pouet);
}
