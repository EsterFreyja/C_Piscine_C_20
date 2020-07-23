/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 16:19:02 by tmartine          #+#    #+#             */
/*   Updated: 2020/07/19 23:07:02 by adenhez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ERROR_H
# define FT_ERROR_H

# define DICT_ERROR "Dict Error\n"
# define ERROR "Error\n"

int	ft_args_errors(int argc);
int	ft_dict_errors(t_item *hash, char *path, char **argv, int argc);
int input_error(char *str, t_item *hash);

#endif
