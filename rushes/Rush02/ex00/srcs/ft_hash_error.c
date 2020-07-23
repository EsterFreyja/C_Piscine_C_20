/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 16:41:02 by tmartine          #+#    #+#             */
/*   Updated: 2020/07/19 16:43:20 by tmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hash.h"
#include "ft_strings.h"

int		ft_nodata(t_item *hash)
{
	while (hash->next != NULL)
	{
		if (ft_strlen(hash->data) == 0)
			return (1);
		hash = hash->next;
	}
	return (0);
}

int		ft_badtype_key(t_item *hash)
{
	while (hash->next != NULL)
	{
		if (!ft_isnum(hash->key))
			return (1);
		hash = hash->next;
	}
	return (0);
}

int		ft_wrong_duplicate_key(t_item *hash)
{
	t_item	*ref;
	char	*k;

	ref = hash;
	while (ref->next != NULL)
	{
		hash = ref->next;
		k = ref->key;
		while (hash->next != NULL)
		{
			if (ft_strcmp(k, hash->key) == 0)
			{
				if (ft_strcmp(hash->data, ref->data))
					return (1);
			}
			hash = hash->next;
		}
		ref = ref->next;
	}
	return (0);
}

int		ft_wrong_duplicate_data(t_item *hash)
{
	t_item	*ref;
	char	*d;
	char	*k;

	ref = hash;
	while (ref->next != NULL)
	{
		hash = ref->next;
		d = ref->data;
		k = ref->key;
		while (hash->next != NULL)
		{
			if (!ft_strcmp(d, hash->data) && ft_strcmp(k, hash->key))
				return (1);
			hash = hash->next;
		}
		ref = ref->next;
	}
	return (0);
}
