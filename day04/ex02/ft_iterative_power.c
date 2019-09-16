/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-alla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 15:03:56 by nel-alla          #+#    #+#             */
/*   Updated: 2019/08/30 15:04:09 by nel-alla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int nbpow;

	nbpow = 1;
	if (power < 0)
		return (0);
	if (!power)
		return (1);
	while (power)
	{
		nbpow *= nb;
		power--;
	}
	return (nbpow);
}
