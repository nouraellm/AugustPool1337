/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-alla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 15:03:12 by nel-alla          #+#    #+#             */
/*   Updated: 2019/08/30 15:03:16 by nel-alla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb)
{
	int i;

	if (nb < 2)
		return (0);
	if (nb % 2 == 0 && nb != 2)
		return (0);
	if (nb == 2)
		return (1);
	else
	{
		i = 3;
		while (i < nb / 2)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int pn;

	pn = nb;
	if (!is_prime(nb))
	{
		while (1)
		{
			pn++;
			if (is_prime(pn))
			{
				return (pn);
			}
		}
	}
	else
	{
		return (nb);
	}
}
