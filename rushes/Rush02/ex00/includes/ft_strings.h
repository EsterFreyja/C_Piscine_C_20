/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenhez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 19:03:53 by adenhez           #+#    #+#             */
/*   Updated: 2020/07/19 22:37:03 by adenhez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRINGS_H
# define FT_STRINGS_H

# include <stdlib.h>
# include <unistd.h>

char	**ft_split(char *str, char *charset);
char	*ft_strdup(char *src);
char	*ft_strjoin(int size, char **strs, char *sep);
int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str);
char	*ft_trim(char *str);
int		ft_strlen(char *str);
int		ft_isnum(char *str);

#endif
