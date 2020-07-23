/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 15:13:17 by tmartine          #+#    #+#             */
/*   Updated: 2020/07/23 15:08:52 by tmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_sep(char a, char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		if (a == c[i])
			return (1);
		i++;
	}
	return (0);
}

int		ft_a(char *str, char *c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (count == 0 && !(ft_sep(str[i], c)))
			count++;
		if (ft_sep(str[i], c) && str[i + 1] && !(ft_sep(str[i + 1], c)))
			count++;
		i++;
	}
	return (count);
}

char	*ft_remplis_moi(char *str, char *charset)
{
	int		i;
	char	*buf;

	i = 0;
	buf = (char *)malloc(sizeof(char) * 100);
	while (!(ft_sep(str[i], charset)))
	{
		buf[i] = str[i];
		i++;
	}
	buf[i] = '\0';
	return (buf);
}

int		ft_bourre_tout(char **hache_boucher, char *str, char *sep, int count)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while (j <= count)
	{
		if (j + 1 > count)
		{
			hache_boucher[j] = (char *)malloc(sizeof(char) * 1);
			hache_boucher[j] = 0;
			return (0);
		}
		while (sep[0] != '\0' && ft_sep(str[i], sep))
			i++;
		k = i;
		while (str[i] && !(ft_sep(str[i], sep)))
			i++;
		if (!(hache_boucher[j] = (char *)malloc(sizeof(char) * (i + 1))))
			return (1);
		hache_boucher[j++] = ft_remplis_moi(&str[k], sep);
	}
	return (0);
}

char	**ft_split(char *str, char *c)
{
	char	**hache_boucher;
	int		i;

	i = 0;
	if (c[0] == '\0' && str[0] == '\0')
	{
		if (!(hache_boucher = (char **)malloc(sizeof(char *) * 2)))
			return (NULL);
		hache_boucher[0] = 0;
		return (hache_boucher);
	}
	if (c[0] == '\0')
	{
		if (!(hache_boucher = (char **)malloc(sizeof(char *) * 2)))
			return (NULL);
		hache_boucher[0] = str;
		hache_boucher[1] = 0;
		return (hache_boucher);
	}
	if (!(hache_boucher = (char **)malloc(sizeof(char *) * (ft_a(str, c) + 1))))
		return (NULL);
	if (ft_bourre_tout(hache_boucher, str, c, ft_a(str, c)))
		return (NULL);
	return (hache_boucher);
}
