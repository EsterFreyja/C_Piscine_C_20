/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenhez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 14:04:02 by adenhez           #+#    #+#             */
/*   Updated: 2020/07/19 22:21:13 by adenhez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strings.h"

int			ft_is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

static char	*trim_before(char *str)
{
	if (str)
	{
		while (*str == '\t' || *str == ' ')
			str++;
	}
	return (str);
}

static int	trim_end(char *str)
{
	int	id_end;

	id_end = ft_strlen(str);
	id_end--;
	if (str)
	{
		while (str[id_end] == '\t' || str[id_end] == ' ')
			id_end--;
	}
	return (id_end + 1);
}

char		*ft_trim(char *str)
{
	char	*ptr;
	char	*trimmed;
	int		len_trimmed;
	int		i;

	str = trim_before(str);
	len_trimmed = trim_end(str);
	if ((trimmed = (char *)malloc(sizeof(char) * (len_trimmed + 1))) == NULL)
		return (NULL);
	ptr = trimmed;
	i = -1;
	while (++i < len_trimmed)
	{
		if (!ft_is_space(str[i]))
			*trimmed++ = str[i];
		else if ((i - 1 >= 0) && (!ft_is_space(str[i - 1])))
		{
			if (str[i] == '\t')
				*trimmed++ = ' ';
			else
				*trimmed++ = str[i];
		}
	}
	*trimmed = '\0';
	return (ptr);
}
