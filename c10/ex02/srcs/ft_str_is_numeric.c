/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 10:29:39 by jlefonde          #+#    #+#             */
/*   Updated: 2023/11/25 13:30:38 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
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
    printf("42\n");
    printf("==============\n");
    printf("Expected: 1\n");
    printf("Result  : %d\n\n", ft_str_is_numeric("42"));

    printf("==============\n");
    printf("Hello 42!\n");
    printf("==============\n");
    printf("Expected: 0\n");
    printf("Result  : %d\n\n", ft_str_is_numeric("Hello 42!"));

    printf("==============\n");
    printf("(empty string)\n");
    printf("==============\n");
    printf("Expected: 1\n");
    printf("Result  : %d\n\n", ft_str_is_numeric(""));

    return 0;
}
*/
