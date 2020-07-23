/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenhez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 12:51:50 by adenhez           #+#    #+#             */
/*   Updated: 2020/07/14 15:16:21 by adenhez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		sep_size(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		full_size(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	len;

	len = 0;
	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			len++;
			j++;
		}
		if (i + 1 < size)
			len += sep_size(sep);
		i++;
	}
	return (len);
}

void	write_str(int size, char **strs, char *sep, char *str)
{
	int		i;
	int		j;
	int		k;

	i = -1;
	j = 0;
	k = 0;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j])
		{
			str[k] = strs[i][j];
			k++;
		}
		j = -1;
		while (i + 1 < size && sep[++j])
		{
			str[k] = sep[j];
			k++;
		}
	}
	str[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;

	if (size > 0)
	{
		if (!(str = (char*)
					malloc(sizeof(char) * (full_size(size, strs, sep) + 1))))
			return (NULL);
		write_str(size, strs, sep, str);
	}
	else
	{
		if (!(str = (char*)malloc(sizeof(char) * 1)))
			return (NULL);
		str[0] = '\0';
	}
	return (str);
}
