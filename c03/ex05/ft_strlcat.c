/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 08:08:02 by jlefonde          #+#    #+#             */
/*   Updated: 2023/12/10 14:09:53 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *str)
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
	unsigned int	i;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	dest_length = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && dest_length + 1 < size)
	{
		dest[dest_length] = src[i];
		dest_length++;
		i++;
	}
	dest[dest_length] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[i]));
}

#include <stdio.h>
#include <bsd/string.h>
#include <string.h>

int main(void)
{
    char dest1[50] = "Hello ";
    char src1[] = "42!";
    printf("%u\n", ft_strlcat(dest1, src1, sizeof(dest1)));

    char dest2[50] = "Hello ";
    char src2[] = "42 Luxembourg!";
    printf("%u\n", ft_strlcat(dest2, src2, sizeof(dest2)));

    return 0;
}
