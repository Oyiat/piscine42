/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 10:29:39 by jlefonde          #+#    #+#             */
/*   Updated: 2023/11/27 12:11:01 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (!(str[i] >= 'a' && str[i] <= 'z'))
				return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{   
    printf("==============\n");
    printf("Hello\n");
    printf("==============\n");;
    printf("Expected: 1\n");
    printf("Result  : %d\n\n", ft_str_is_alpha("Hello"));

    printf("==============\n");
    printf("Hello 42!\n");
    printf("==============\n");
    printf("Expected: 0\n");
    printf("Result  : %d\n\n", ft_str_is_alpha("Hello 42!"));
    
    printf("==============\n");
    printf("(empty string)\n");
    printf("==============\n");
    printf("Expected: 1\n");
    printf("Result  : %d\n\n", ft_str_is_alpha(""));

    return 0;
}
*/
