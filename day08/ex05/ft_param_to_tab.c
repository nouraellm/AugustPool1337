/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-alla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 22:19:43 by nel-alla          #+#    #+#             */
/*   Updated: 2019/09/12 04:30:21 by nel-alla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	char	*str;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(src);
	str = (char*)malloc(sizeof(*str) * len + 1);
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct s_stock_par	*ft_param_to_tab(int argc, char **argv)
{
	t_stock_par	*arr;
	int			i;

	i = 0;
	if (!(arr = (t_stock_par*)malloc(sizeof(t_stock_par) * (argc + 1))))
		return (0);
	while (i < argc)
	{
		arr[i].size_param = ft_strlen(argv[i]);
		arr[i].str = argv[i];
		arr[i].copy = ft_strdup(argv[i]);
		arr[i].tab = ft_split_whitespaces(argv[i]);
		i++;
	}
	arr[i].str = 0;
	return (arr);
}
