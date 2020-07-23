/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 16:38:42 by tmartine          #+#    #+#             */
/*   Updated: 2020/07/19 16:40:27 by tmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_read_file.h"
#include "ft_hash.h"
#include "ft_strings.h"

char	*store_dict(char *path)
{
	char	*buffer;
	int		i;
	int		file;
	char	c;

	i = 0;
	if (!(file = open(path, O_RDONLY)))
		return (NULL);
	while (read(file, &c, 1) > 0)
		i++;
	close(file);
	if (!(buffer = malloc(sizeof(char) * (i + 2))))
		return (NULL);
	if (!(file = open(path, O_RDONLY)))
		return (NULL);
	i = 0;
	while (read(file, &c, 1) > 0)
	{
		buffer[i] = c;
		i++;
	}
	buffer[i] = '\n';
	buffer[i + 1] = '\0';
	close(file);
	return (buffer);
}

void	set_hash(t_item **hash, char *path)
{
	char	*buffer;
	char	**tab;
	char	**minitab;
	int		i;

	buffer = store_dict(path);
	tab = ft_split(buffer, "\n");
	free(buffer);
	*hash = NULL;
	i = 0;
	while (tab[i] != 0)
	{
		minitab = ft_split(tab[i], ":");
		if (minitab[0] && minitab[1])
		{
			minitab[0] = ft_trim(minitab[0]);
			minitab[1] = ft_trim(minitab[1]);
			init(hash, minitab[0], minitab[1]);
		}
		free(minitab);
		i++;
	}
	free(tab);
	reverse(hash);
}
