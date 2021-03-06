/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 16:37:44 by tmartine          #+#    #+#             */
/*   Updated: 2020/07/19 16:37:46 by tmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hash.h"
#include "ft_strings.h"

int		ft_empty_hash(t_item *hash)
{
	if (hash == NULL)
		return (1);
	return (0);
}
