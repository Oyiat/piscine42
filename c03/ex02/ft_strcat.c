/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 08:06:22 by jlefonde          #+#    #+#             */
/*   Updated: 2023/11/28 09:03:44 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
	{
		length++;
	}
	return (length);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_length;

	i = 0;
	dest_length = ft_strlen(dest);
	while (src[i])
	{
		dest[i + dest_length] = src[i];
		i++;
	}
	dest[i + dest_length] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
    char dest1[50] = "Hello ";
    char src1[] = "42!";
    printf("%s\n", ft_strcat(dest1, src1));

    char dest2[50] = "Hello ";
    char src2[] = "42 Luxembourg!";
    printf("%s\n", ft_strcat(dest2, src2));

    return (0);
}
*/
