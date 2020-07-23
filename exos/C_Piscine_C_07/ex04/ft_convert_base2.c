/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 17:10:10 by tmartine          #+#    #+#             */
/*   Updated: 2020/07/20 20:17:37 by tmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check(char *base)
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

int		ft_unchar(char k, char *base)
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

int		ft_start(char *str)
{
	int		posi;
	int		i;

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
	return (posi);
}
