/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-alla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 00:40:35 by nel-alla          #+#    #+#             */
/*   Updated: 2019/08/25 05:36:31 by nel-alla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char	c);

void	ft_print(int num1, int num2, int num3)
{
	ft_putchar('0' + num1);
	ft_putchar('0' + num2);
	ft_putchar('0' + num3);
	if (!(num1 == 7 && num2 == 8 && num3 == 9))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int num1;
	int num2;
	int num3;

	num1 = 0;
	while (num1 <= 7)
	{
		num2 = 1;
		while (num2 <= 8)
		{
			num3 = 2;
			while (num3 <= 9)
			{
				if (num2 > num1 && num3 > num2)
				{
					ft_print(num1, num2, num3);
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
}
