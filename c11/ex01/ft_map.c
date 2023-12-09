/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:12:58 by jlefonde          #+#    #+#             */
/*   Updated: 2023/12/09 13:50:38 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*result;

	i = 0;
	result = (int *)malloc(length * sizeof(int));
	while (i < length)
	{
		result[i] = f(tab[i]);
		i++;
	}
	return (result);
}
/*
#include <unistd.h>
#include <stdio.h>

int ft_add_one(int i)
{
	return (i + 1);
}

int main()
{
	int tab[50];
	int	*result;
	int i;

	i = 0;
	while (i < 50)
	{
		tab[i] = i;
		i++;
	}
	result = ft_map(tab, 50, &ft_add_one);
	i = 0;
	while (i < 50)
	{
		printf("%d, ", result[i]);
		i++;
	}
	free(result);
}
*/
