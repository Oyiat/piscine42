/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:11:19 by jlefonde          #+#    #+#             */
/*   Updated: 2023/12/09 13:48:55 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (!(f(tab[i]) == 0))
			count++;
		i++;
	}
	return (count);
}
/*
int	ft_contains_char_o(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'o')
			return (1);
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char **tab = (char **)malloc(2 * sizeof(char *));
	tab[0] = (char *)malloc(15 * sizeof(char));
	tab[0] = "Welcome to";
	tab[1] = (char *)malloc(15 * sizeof(char));
	tab[1] = " 42 School!";
	printf("%d", ft_count_if(tab, 2, &ft_contains_char_o));
}
*/
