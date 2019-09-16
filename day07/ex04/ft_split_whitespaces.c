/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-alla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 09:53:51 by nel-alla          #+#    #+#             */
/*   Updated: 2019/09/11 17:47:41 by nel-alla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_s_len(char *str)
{
	int word;
	int len;

	word = 0;
	len = 0;
	if (!str)
		return (0);
	while (*str)
	{
		if (*str == ' ' || *str == '\n' || *str == '\t')
			word = 0;
		else if (word == 0)
		{
			word = 1;
			len++;
		}
		str++;
	}
	return (len);
}

int		ft_ns_len(int i, char *str)
{
	int len;

	len = 0;
	while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'
			&& str[i])
	{
		len++;
		str++;
	}
	return (len);
}

char	**ft_split_whitespaces(char *str)
{
	char	**arr;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	arr = malloc(sizeof(char*) * ft_s_len(str) + 1);
	while (str[i] != '\0' && j < ft_s_len(str))
	{
		k = 0;
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		arr[j] = malloc(ft_ns_len(i, str) + 1);
		while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'
				&& str[i])
		{
			arr[j][k++] = str[i++];
		}
		arr[j][k] = '\0';
		j++;
	}
	arr[j] = 0;
	return (arr);
}
