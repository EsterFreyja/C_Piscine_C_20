/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 16:19:40 by tmartine          #+#    #+#             */
/*   Updated: 2020/07/19 16:28:42 by tmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HASH_H
# define FT_HASH_H

# include <stdlib.h>

typedef	struct	s_item
{
	char			*key;
	char			*data;
	struct s_item	*next;
}				t_item;

void			print_item(t_item *item);
void			print_hash(t_item *hash);
int				exist(t_item *hash, char *key);
t_item			*search(t_item *hash, char *key);
void			init(t_item **hash, char *key, char *data);
int				insert(t_item **hash, char *key, char *data);
void			free_item(t_item **hash);
void			reverse(t_item **hash);
void			set_hash(t_item **item, char *path);
int				ft_empty_hash(t_item *hash);
int				ft_nodata(t_item *hash);
int				ft_badtype_key(t_item *hash);
int				ft_wrong_duplicate_key(t_item *hash);
int				ft_wrong_duplicate_data(t_item *hash);

#endif
