/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 08:07:46 by jlefonde          #+#    #+#             */
/*   Updated: 2023/11/25 10:27:30 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
int	main(int argc, char *argv[])
{
	char	string1[] = "Hello 42!";
	char	string2[] = "";
	
	printf("%s", ft_strcpy(string2, string1));
}
