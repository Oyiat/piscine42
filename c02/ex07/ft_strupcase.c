/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:41:47 by jlefonde          #+#    #+#             */
/*   Updated: 2023/11/27 12:12:46 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main(void)
{
    char str1[] = "HELLO";
    printf("==============\n");
    printf("HELLO\n");
    printf("==============\n");
    printf("Expected: HELLO\n");
    printf("Result  : %s\n\n", ft_strupcase(str1));

    char str2[] = "Hello 42!";
    printf("==============\n");
    printf("Hello 42!\n");
    printf("==============\n");
    printf("Expected: HELLO 42!\n");
    printf("Result  : %s\n\n", ft_strupcase(str2));

    char str3[] = "hello";
    printf("==============\n");
    printf("hello\n");
    printf("==============\n");
    printf("Expected: HELLO\n");
    printf("Result  : %s\n\n", ft_strupcase(str3));

    char str4[] = "";
    printf("==============\n");
    printf("(empty string)\n");
    printf("==============\n");
    printf("Expected: (empty string)\n");
    printf("Result  : %s\n\n", ft_strupcase(str4));

    return 0;
}
*/
