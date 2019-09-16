/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-alla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 09:51:58 by nel-alla          #+#    #+#             */
/*   Updated: 2019/09/12 02:15:01 by nel-alla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int len;

	i = 0;
	if (min >= max)
		return (0);
	len = max - min;
	*range = malloc(len * sizeof(int));
	if (*range == NULL)
		return (0);
	while (min < max)
	{
		range[0][i] = min++;
		i++;
	}
	return (i);
}
