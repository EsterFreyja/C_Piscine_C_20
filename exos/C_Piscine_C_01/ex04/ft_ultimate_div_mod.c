/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 12:05:58 by tmartine          #+#    #+#             */
/*   Updated: 2020/07/04 12:19:18 by tmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int buf_a;
	int buf_b;

	buf_a = *a;
	buf_b = *b;
	*a = buf_a / buf_b;
	*b = buf_a % buf_b;
}
