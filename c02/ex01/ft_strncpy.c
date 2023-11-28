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
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{	
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
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
	
    ft_strncpy(string, "Hello 42!", sizeof(string));
    printf("=========================\n");
    printf("Copying string to string1\n");
    printf("=========================\n");
    printf("Expected: Hello 42!\n");
    printf("Result  : %s\n\n", string);

    ft_strncpy(string, "", sizeof(string));
    printf("=======================\n");
    printf("Copying an empty string\n");
    printf("=======================\n");
    printf("Expected: (empty string)\n");
    printf("Result  : %s\n\n", string);

    ft_strncpy(string, "Hello", sizeof(string));
    printf("======================\n");
    printf("Copying a short string\n");
    printf("======================\n");
    printf("Expected: Hello\n");
    printf("Result  : %s\n\n", string);

    ft_strncpy(string, "Hello 42! Hello 42!", sizeof(string));
    printf("=======================\n");
    printf("Copying a longer string\n");
    printf("=======================\n");
    printf("Expected: Hello 42! Hello 42!\n");
    printf("Result  : %s\n\n", string);

    ft_strncpy(string, "Hello 42! Hello 42!", 6);
    printf("====================================\n");
    printf("Copying with a limit of 6 characters\n");
    printf("====================================\n");
    printf("Expected: Hello\n");
    printf("Result  : %s\n\n", string);

    return 0;
}
*/
