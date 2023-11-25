/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 09:41:37 by jlefonde          #+#    #+#             */
/*   Updated: 2023/11/25 10:11:35 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{	
	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(int args, char *argv[])
{
	char	string1[] = "Hello 42!";
	char	string2[] = "";

	printf("%s", ft_strncpy(string2, string1, 1));
	return (0);
}
