/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_item2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenhez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 12:49:33 by adenhez           #+#    #+#             */
/*   Updated: 2020/07/19 16:47:52 by tmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hash.h"
#include "ft_strings.h"

void	print_item(t_item *item)
{
	int i;

	i = 0;
	while (item->key[i])
	{
		write(1, &(item->key[i]), 1);
		i++;
	}
	write(1, " -> ", 4);
	i = 0;
	while (item->data[i])
	{
		write(1, &(item->data[i]), 1);
		i++;
	}
}

void	print_hash(t_item *hash)
{
	t_item *ptr;

	ptr = hash;
	while (ptr != NULL)
	{
		print_item(ptr);
		write(1, "\n", 1);
		ptr = ptr->next;
	}
	write(1, "[NULL]", 6);
}

int		exist(t_item *hash, char *key)
{
	t_item *current;

	current = hash;
	while (current != NULL)
	{
		if (!ft_strcmp(current->key, key))
			return (1);
		current = current->next;
	}
	return (0);
}

t_item	*search(t_item *hash, char *key)
{
	t_item *current;

	current = hash;
	while (current != NULL)
	{
		if (!ft_strcmp(current->key, key))
			return (current);
		current = current->next;
	}
	return (NULL);
}
