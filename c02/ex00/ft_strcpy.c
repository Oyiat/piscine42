/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 08:07:46 by jlefonde          #+#    #+#             */
/*   Updated: 2023/11/26 16:05:24 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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
/*
#include <stdio.h>

int main(void)
{
    char string[50];

    ft_strcpy(string, "Hello 42!");
    printf("=========================\n");
    printf("Copying string to string1\n");
    printf("=========================\n");
    printf("Expected: Hello 42!\n");
    printf("Result  : %s\n\n", string);

    ft_strcpy(string, "");
    printf("=======================\n");
    printf("Copying an empty string\n");
    printf("=======================\n");
    printf("Expected: (empty string)\n");
    printf("Result  : %s\n\n", string);

    ft_strcpy(string, "Hello");
    printf("======================\n");
    printf("Copying a short string\n");
    printf("======================\n");
    printf("Expected: Hello\n");
    printf("Result  : %s\n\n", string);

    ft_strcpy(string, "Hello 42! Hello 42!");
    printf("=======================\n"); 
    printf("Copying a longer string\n");
    printf("=======================\n");
    printf("Expected: Hello 42! Hello 42!\n");
    printf("Result  : %s\n\n", string);

    return 0;
}
*/
