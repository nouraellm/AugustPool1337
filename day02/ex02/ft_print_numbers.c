/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-alla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 16:06:27 by nel-alla          #+#    #+#             */
/*   Updated: 2019/08/22 19:43:13 by nel-alla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char	c);

void	ft_print_numbers(void)
{
	int starting_digit;
	int ending_digit;

	starting_digit = 48;
	ending_digit = 57;
	while (starting_digit <= ending_digit)
	{
		ft_putchar(starting_digit++);
	}
}
