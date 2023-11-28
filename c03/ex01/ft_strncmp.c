/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:44:12 by jlefonde          #+#    #+#             */
/*   Updated: 2023/11/27 16:01:20 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (((unsigned char)s1[i] || (unsigned char)s2[i]) && i < n)
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
	printf("%d\n", ft_strncmp("Hello 42!", "Hello 42!", 9));
	printf("%d\n", ft_strncmp("Hello 42!", "Hello", 9));
	printf("%d\n", ft_strncmp("Hello", "Hello 42!", 5));
	printf("%d\n", ft_strncmp("", "", 1));
}
*/
