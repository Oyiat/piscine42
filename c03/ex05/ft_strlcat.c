/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 08:08:02 by jlefonde          #+#    #+#             */
/*   Updated: 2023/11/28 17:52:54 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_length;
	unsigned int	src_length;
	unsigned int	i;

	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	i = 0;
	while (i < size - dest_length - 1 && src[i])
	{
		dest[i + dest_length] = src[i];
		i++;
	}
	if (size != 0)
	{
		dest[i + dest_length] = '\0';
	}

	if ((dest_length + src_length) < size)
		return (dest_length + src_length);
	return (size);
}
/*
#include <stdio.h>

int main(void)
{
    char dest1[50] = "Hello ";
    char src1[] = "42!";
    printf("%u\n", ft_strlcat(dest1, src1, 3));

    char dest2[50] = "Hello ";
    char src2[] = "42 Luxembourg!";
    printf("%u\n", ft_strlcat(dest2, src2, 0));

    return (0);
}
*/
