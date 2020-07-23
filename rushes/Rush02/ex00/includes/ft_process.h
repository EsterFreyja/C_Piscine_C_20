/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 20:57:19 by tmartine          #+#    #+#             */
/*   Updated: 2020/07/19 22:37:20 by adenhez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PROCESS_H
# define FT_PROCESS_H

void	ft_process(t_item *hash, char *str);
char	*fill_dimension(int	size);
void	display_dimension(t_item *hash, int i, int size);
int		display_hundred(t_item *hash, int i, char *str, int size);
int		display_ten(t_item *hash, int i, char *str, int size);
int		display_unity(t_item *hash, int i, char *str, int size);

#endif
