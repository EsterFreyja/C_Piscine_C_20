/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_item.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenhez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 12:49:27 by adenhez           #+#    #+#             */
/*   Updated: 2020/07/19 16:52:51 by tmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hash.h"
#include "ft_strings.h"

void	free_item(t_item **hash)
{
	t_item	*current_node;
	t_item	*next_node;

	current_node = *hash;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
	(*hash) = NULL;
}

void	init(t_item **hash, char *key, char *data)
{
	t_item	*new_item;

	new_item = (t_item*)malloc(sizeof(t_item));
	if (new_item == NULL)
		return ;
	new_item->key = key;
	new_item->data = data;
	new_item->next = (*hash);
	(*hash) = new_item;
}

int		insert(t_item **hash, char *key, char *data)
{
	t_item	*current;
	t_item	*new_item;

	current = *hash;
	new_item = malloc(sizeof(t_item));
	while (current->next != NULL)
		current = current->next;
	new_item->key = key;
	new_item->data = data;
	new_item->next = NULL;
	current->next = new_item;
	return (1);
}

void	reverse(t_item **hash)
{
	t_item	*prev;
	t_item	*current;
	t_item	*next;

	prev = NULL;
	current = *hash;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*hash = prev;
}
