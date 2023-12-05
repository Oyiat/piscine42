/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:19:02 by jlefonde          #+#    #+#             */
/*   Updated: 2023/12/05 07:35:48 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_strs_to_tab.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*strs;
	int					i;

	i = 0;
	strs = (struct s_stock_str *)malloc(ac * sizeof(struct s_stock_str));
	if (strs == NULL)
		return (NULL);
	while (i < ac)
	{
		strs[i].size = ft_strlen(av[i]);
		strs[i].str = av[i];
		strs[i].copy = (char *)malloc((strs[i].size + 1) * sizeof(char));
		if (strs[i].copy == NULL)
			return (NULL);
		ft_strcpy(strs[i].copy, av[i]);
		i++;
	}
	strs[i].str = 0;
	return (strs);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int i;
	struct s_stock_str *strs = ft_strs_to_tab(argc, argv);

	i = 0;
	while (i < argc)
	{
		printf("%s\n", strs[i].str);
		printf("%d\n", strs[i].size);
		printf("%s\n", strs[i].copy);
		i++;
	}
	free(strs);
}*/
