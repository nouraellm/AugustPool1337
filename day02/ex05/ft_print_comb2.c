/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-alla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 04:14:37 by nel-alla          #+#    #+#             */
/*   Updated: 2019/08/24 15:11:12 by nel-alla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int num1;
	int num2;

	num1 = -1;
	while (num1++ < 98)
	{
		num2 = num1;
		while (num2++ < 99)
		{
			ft_putchar('0' + (num1 / 10));
			ft_putchar('0' + (num1 % 10));
			ft_putchar(' ');
			ft_putchar('0' + (num2 / 10));
			ft_putchar('0' + (num2 % 10));
			if (num1 == 98 && num2 == 99)
			{
				break ;
			}
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}
