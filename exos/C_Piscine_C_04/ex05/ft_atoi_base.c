/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 19:46:28 by tmartine          #+#    #+#             */
/*   Updated: 2020/07/17 10:35:31 by tmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_checkbase(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		if (base[i] == 43 || base[i] == 45)
			return (0);
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

int		ft_is_base(char k, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (k == base[i])
			return (1);
		i++;
	}
	return (0);
}

int		ft_uncharify(char k, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (k == base[i])
			return (i);
		i++;
	}
	return (0);
}

int		ft_atoi_base(char *str, char *base)
{
	int l_base;
	int posi;
	int i;
	int result;

	result = 0;
	l_base = ft_checkbase(base);
	if (l_base == 0)
		return (0);
	i = 0;
	posi = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			posi = posi * -1;
		i++;
	}
	while (str[i] != '\0' && ft_is_base(str[i], base))
	{
		result = (result * l_base) + ft_uncharify(str[i], base);
		i++;
	}
	return (result * posi);
}
