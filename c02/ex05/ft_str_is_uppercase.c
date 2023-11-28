/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 10:29:39 by jlefonde          #+#    #+#             */
/*   Updated: 2023/11/25 13:41:22 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
    printf("==============\n");
    printf("HELLO\n");
    printf("==============\n");
    printf("Expected: 1\n");
    printf("Result  : %d\n\n", ft_str_is_uppercase("HELLO"));

    printf("==============\n");
    printf("Hello\n");
    printf("==============\n");
    printf("Expected: 0\n");
    printf("Result  : %d\n\n", ft_str_is_uppercase("Hello"));
    
    printf("==============\n");
    printf("hello\n");
    printf("==============\n");
    printf("Expected: 0\n");
    printf("Result  : %d\n\n", ft_str_is_uppercase("hello"));

    printf("==============\n");
    printf("(empty string)\n");
    printf("==============\n");
    printf("Expected: 1\n");
    printf("Result  : %d\n\n", ft_str_is_uppercase(""));

    return 0;
}
*/
