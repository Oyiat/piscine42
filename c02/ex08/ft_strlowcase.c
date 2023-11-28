/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:04:09 by jlefonde          #+#    #+#             */
/*   Updated: 2023/11/26 16:04:32 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main(void)
{
    char str1[] = "hello";
    printf("==============\n");
    printf("hello\n");
    printf("==============\n");
    printf("Expected: hello\n");
    printf("Result  : %s\n\n", ft_strlowcase(str1));

    char str2[] = "Hello 42!";
    printf("==============\n");
    printf("Hello 42!\n");
    printf("==============\n");
    printf("Expected: hello 42!\n");
    printf("Result  : %s\n\n", ft_strlowcase(str2));

    char str3[] = "HELLO";
    printf("==============\n");
    printf("HELLO\n");
    printf("==============\n");
    printf("Expected: hello\n");
    printf("Result  : %s\n\n", ft_strlowcase(str3));

    char str4[] = "";
    printf("==============\n");
    printf("(empty string)\n");
    printf("==============\n");
    printf("Expected: (empty string)\n");
    printf("Result  : %s\n\n", ft_strlowcase(str4));

    return 0;
}
*/
