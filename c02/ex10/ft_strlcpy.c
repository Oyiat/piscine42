/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 07:31:51 by jlefonde          #+#    #+#             */
/*   Updated: 2023/11/28 07:41:45 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	length;
	unsigned int	i;

	length = 0;
	i = 0;
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
		length++;
	}
	dest[i] = '\0';
	return (length);
}
/*
#include <stdio.h>

int main(void)
{
    char string[50];
	
    ft_strlcpy(string, "Hello 42!", sizeof(string));
    printf("=========================\n");
    printf("Copying string to string1\n");
    printf("=========================\n");
    printf("Expected: Hello 42!\n");
    printf("Result  : %s\n\n", string);

    ft_strlcpy(string, "", sizeof(string));
    printf("=======================\n");
    printf("Copying an empty string\n");
    printf("=======================\n");
    printf("Expected: (empty string)\n");
    printf("Result  : %s\n\n", string);

    ft_strlcpy(string, "Hello", sizeof(string));
    printf("======================\n");
    printf("Copying a short string\n");
    printf("======================\n");
    printf("Expected: Hello\n");
    printf("Result  : %s\n\n", string);

    ft_strlcpy(string, "Hello 42! Hello 42!", sizeof(string));
    printf("=======================\n");
    printf("Copying a longer string\n");
    printf("=======================\n");
    printf("Expected: Hello 42! Hello 42!\n");
    printf("Result  : %s\n\n", string);

    ft_strlcpy(string, "Hello 42! Hello 42!", 6);
    printf("====================================\n");
    printf("Copying with a limit of 6 characters\n");
    printf("====================================\n");
    printf("Expected: Hello\n");
    printf("Result  : %s\n\n", string);

    return 0;
}
*/
