/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:57:29 by jlefonde          #+#    #+#             */
/*   Updated: 2023/12/09 13:48:33 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}
/*
int	ft_contains_char_e(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'e')
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
	tab[0] = (char *)malloc(6 * sizeof(char));
	tab[0] = "Hallo";
	tab[1] = (char *)malloc(6 * sizeof(char));
	tab[1] = " 42!e";
	printf("%d", ft_any(tab, &ft_contains_char_e));
}
*/
