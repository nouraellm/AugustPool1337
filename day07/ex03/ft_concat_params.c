/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-alla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 09:53:04 by nel-alla          #+#    #+#             */
/*   Updated: 2019/09/11 23:02:27 by nel-alla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(int argc, char **argv)
{
	int		k;
	int		i;
	int		j;

	k = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j++])
			k++;
		k++;
		i++;
	}
	return (k);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		k;
	int		i;
	int		j;

	str = malloc(ft_strlen(argc, argv));
	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			str[k++] = argv[i][j++];
		if (i < argc - 1)
			str[k++] = '\n';
		i++;
	}
	str[k] = '\0';
	return (str);
}
