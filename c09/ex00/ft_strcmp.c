/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:19:53 by jlefonde          #+#    #+#             */
/*   Updated: 2023/11/28 12:17:25 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((unsigned char)s1[i] || (unsigned char)s2[i])
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
		{
			if ((unsigned char)s1[i] > (unsigned char)s2[i])
				return (1);
			return (-1);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_strcmp("Hello 42!", "Hello 42!"));
	printf("%d\n", ft_strcmp("Hello 42!", "Hello"));
	printf("%d\n", ft_strcmp("Hello", "Hello 42!"));
	printf("%d\n", ft_strcmp("", ""));
}
*/
