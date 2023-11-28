/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 07:31:51 by jlefonde          #+#    #+#             */
/*   Updated: 2023/11/28 11:52:19 by jlefonde         ###   ########.fr       */
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
	while (i < size - 1)
	{
		dest[i] = '\0';
		i++;
	}
	return (length);
}
/*
#include <stdio.h>

int main(void) {
    char str1_dest[50];
    char str2_dest[50];
    char str3_dest[50];
    char str4_dest[50];

    char *str1_src = "Hello 42!";
    char *str2_src = "";
    char *str3_src = "Hello";
    char *str4_src = "Hello 42! Hello 42!";

    int srt1_dest_length = ft_strlcpy(str1_dest, str1_src, sizeof(str1_dest));
    printf("=========================\n");
    printf("Hello 42!\n");
    printf("=========================\n");
    printf("Expected: Hello 42!\n");
    printf("Result  : %s\n", str1_dest);
    printf("Length  : %u\n\n", srt1_dest_length);

    int str2_dest_length = ft_strlcpy(str2_dest, str2_src, sizeof(str2_dest));
    printf("=======================\n");
    printf("(empty string)\n");
    printf("=======================\n");
    printf("Expected: (empty string)\n");
    printf("Result  : %s\n", str2_dest);
    printf("Length  : %u\n\n", str2_dest_length);
	
    int str3_dest_length = ft_strlcpy(str3_dest, str3_src, sizeof(str3_dest));
    printf("======================\n");
    printf("Hello\n");
    printf("======================\n");
    printf("Expected: Hello\n");
    printf("Result  : %s\n", str3_dest);
    printf("Length  : %u\n\n", str3_dest_length);
	
    int str4_dest_length = ft_strlcpy(str4_dest, str4_src, sizeof(str4_dest));
    printf("=======================\n");
    printf("Hello 42! Hello 42!\n");
    printf("=======================\n");
    printf("Expected: Hello 42! Hello 42!\n");
    printf("Result  : %s\n", str4_dest);
    printf("Length  : %u\n\n", str4_dest_length);
	
    return 0;
}
*/
