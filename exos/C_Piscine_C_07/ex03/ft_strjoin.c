/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 14:29:21 by tmartine          #+#    #+#             */
/*   Updated: 2020/07/21 12:10:20 by tmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *a)
{
	int		i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

int		ft_sep(char *str, char *sep)
{
	int		i;

	i = 0;
	while (sep[i])
	{
		str[i] = sep[i];
		i++;
	}
	return (i);
}

char	*ft_la_boucle(int size, char **strs, char *str, char *sep)
{
	int	i;
	int	j;
	int	len;

	j = 0;
	len = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i])
		{
			str[len] = strs[j][i];
			len++;
			i++;
		}
		len = len + ft_sep(str + len, sep);
		j++;
	}
	if (j)
		len = len - ft_strlen(sep);
	str[len] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		j;
	int		len;
	char	*str;

	j = 0;
	len = 0;
	while (j < size)
	{
		len = len + ft_strlen(strs[j]) + ft_strlen(sep);
		j++;
	}
	str = (char *)malloc((sizeof(char) * len) + 1);
	if (!(str))
		return (NULL);
	return (ft_la_boucle(size, strs, str, sep));
}
