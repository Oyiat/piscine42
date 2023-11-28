/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 09:41:37 by jlefonde          #+#    #+#             */
/*   Updated: 2023/11/28 11:32:34 by jlefonde         ###   ########.fr       */
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
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int main(void) {
    char str1_dest[50];
    char str2_dest[50];
    char str3_dest[50];
    char str4_dest[50];
    char str5_dest[50];

    char *str1_src = "Hello 42!";
    char *str2_src = "";
    char *str3_src = "Hello";
    char *str4_src = "Hello 42! Hello 42!";
    char *str5_src = "Hello 42! Hello 42!";

    ft_strncpy(str1_dest, str1_src, sizeof(str1_dest));
    printf("=========================\n");
    printf("Hello 42!\n");
    printf("=========================\n");
    printf("Expected: Hello 42!\n");
    printf("Result  : %s\n\n", str1_dest);

    ft_strncpy(str2_dest, str2_src, sizeof(str2_dest));
    printf("=======================\n");
    printf("(empty string)\n");
    printf("=======================\n");
    printf("Expected: (empty string)\n");
    printf("Result  : %s\n\n", str2_dest);

    ft_strncpy(str3_dest, str3_src, sizeof(str3_dest));
    printf("======================\n");
    printf("Hello\n");
    printf("======================\n");
    printf("Expected: Hello\n");
    printf("Result  : %s\n\n", str3_dest);

    ft_strncpy(str4_dest, str4_src, sizeof(str4_dest));
    printf("=======================\n");
    printf("Hello 42! Hello 42!\n");
    printf("=======================\n");
    printf("Expected: Hello 42! Hello 42!\n");
    printf("Result  : %s\n\n", str4_dest);

    ft_strncpy(str5_dest, str5_src, 6);
    printf("======================\n");
    printf("Hello 42! Hello 42!\n");
    printf("======================\n");
    printf("Expected: Hello\n");
    printf("Result  : %s\n\n", str5_dest);

    return 0;
}
*/
