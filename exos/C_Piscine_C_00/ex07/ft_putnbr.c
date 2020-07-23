/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 21:46:29 by tmartine          #+#    #+#             */
/*   Updated: 2020/07/03 11:30:15 by tmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	char c;

	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-", 1);
			write(1, "2", 1);
			ft_putnbr(147483648);
			return ;
		}
		nb = nb * -1;
		write(1, "-", 1);
	}
	if (nb >= 0 && nb < 10)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
