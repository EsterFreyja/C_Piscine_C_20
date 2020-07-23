/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelhomm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 07:25:25 by tbelhomm          #+#    #+#             */
/*   Updated: 2020/07/12 07:30:37 by tbelhomm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH_H
# define FT_RUSH_H

void	ft_putstr(char *str);
void	ft_putchar(char c);
char	**ft_init_tab(char *params, int size);
void	ft_destroy_tab(char **tab, int size);
void	ft_print_tab(char **tab, int size);
int		ft_get_size(char *str);
int		ft_solve(char **tab, int size);
int		ft_check_col(char **tab, int x, int delta, int size);
int		ft_check_row(char **tab, int y, int delta, int size);
int		ft_is_duplicate(char **tab, int x, int y, int size);
#endif
