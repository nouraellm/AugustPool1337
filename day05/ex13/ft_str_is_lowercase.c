/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-alla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 01:11:00 by nel-alla          #+#    #+#             */
/*   Updated: 2019/09/04 01:33:52 by nel-alla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 97 || str[i] > 122))
			return (0);
		i++;
	}
	return (1);
}
