/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 16:53:34 by tmartine          #+#    #+#             */
/*   Updated: 2020/07/17 11:45:26 by tmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	unsigned int i;

	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (1);
		i++;
	}
	return (0);
}

int		ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!(ft_is_prime(nb) == 0))
		nb++;
	return (nb);
}
