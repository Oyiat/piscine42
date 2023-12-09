/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:57:37 by jlefonde          #+#    #+#             */
/*   Updated: 2023/12/09 14:36:38 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int	ft_intcmp(int first, int second)
{
	if (first != second)
	{
		if (first > second)
			return (1);
		return (-1);
	}
	return (0);
}

#include <stdio.h>

int	main()
{
	int tab[50];
	int i;

	i = 0;
	while (i < 50)
	{
		tab[i] = i;
		i++;
	}
	printf("%d", ft_is_sort(tab, 50, &ft_intcmp));
}
*/
