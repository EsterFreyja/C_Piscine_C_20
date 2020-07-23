/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:33:33 by tmartine          #+#    #+#             */
/*   Updated: 2020/07/19 23:12:08 by tmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_translate(int nbr, char *base)
{
	write(1, &base[nbr], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	l_base;

	l_base = ft_checkbase(base);
	if (l_base == 0)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * -1;
	}
	if (nbr >= 0 && nbr < l_base)
		ft_translate(nbr, base);
	if (nbr >= l_base)
	{
		ft_putnbr_base(nbr / l_base, base);
		ft_putnbr_base(nbr % l_base, base);
	}
}
int main()
{
	ft_putnbr_base(16, "0123456789abcdef");
}
