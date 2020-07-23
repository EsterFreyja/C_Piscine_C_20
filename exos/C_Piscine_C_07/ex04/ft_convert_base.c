/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 17:08:33 by tmartine          #+#    #+#             */
/*   Updated: 2020/07/20 22:43:04 by tmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_check(char *base);
int		ft_is_base(char k, char *base);
int		ft_unchar(char k, char *base);
int		ft_start(char *str);
int		ft_len(int medium);

long	ft_decode(char *nbr, char *base_from)
{
	int		i;
	long	result;

	i = 0;
	result = 0;
	while (nbr[i] == 32 || (nbr[i] >= 9 && nbr[i] <= 13)
			|| nbr[i] == 43 || nbr[i] == 45)
		i++;
	while (nbr[i] != '\0' && ft_is_base(nbr[i], base_from))
	{
		result = (result * ft_check(base_from)) + ft_unchar(nbr[i], base_from);
		i++;
	}
	return (result);
}

void	ft_convert(long medium, char *base_to,
		char *unestring, int *p_i)
{
	long		l_base;

	l_base = ft_check(base_to);
	if (medium >= 0 && medium < l_base)
	{
		unestring[*p_i] = base_to[medium];
		*p_i = *p_i + 1;
	}
	if (medium >= l_base)
	{
		ft_convert(medium / l_base, base_to, unestring, p_i);
		ft_convert(medium % l_base, base_to, unestring, p_i);
	}
	unestring[*p_i] = '\0';
}

char	*ft_jonemar(char *cepafini, char *celafin, int i)
{
	int		j;

	j = 0;
	while (cepafini[j])
	{
		celafin[i] = cepafini[j];
		i++;
		j++;
	}
	celafin[i] = '\0';
	return (celafin);
}

char	*ft_recode(long medium, char *base_to, int posi)
{
	char	cepafini[50];
	char	*celafin;
	int		i;
	int		*p_i;

	i = 0;
	p_i = &i;
	ft_convert(medium, base_to, cepafini, p_i);
	if (posi < 0)
		celafin = (char *)malloc(sizeof(char) * (*p_i + 3));
	else
		celafin = (char *)malloc(sizeof(char) * (*p_i + 2));
	if (!(celafin))
		return (0);
	if (posi < 0 && medium != 0)
	{
		i = 1;
		celafin[0] = '-';
	}
	else
		i = 0;
	return (ft_jonemar(cepafini, celafin, i));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if (!(ft_check(base_from)) || !(ft_check(base_to)))
		return (NULL);
	return (ft_recode(ft_decode(nbr, base_from), base_to, ft_start(nbr)));
}
