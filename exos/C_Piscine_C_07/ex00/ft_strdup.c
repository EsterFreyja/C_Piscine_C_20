/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 10:16:29 by tmartine          #+#    #+#             */
/*   Updated: 2020/07/20 00:11:14 by tmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
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
