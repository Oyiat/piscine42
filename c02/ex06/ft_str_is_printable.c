/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 10:29:39 by jlefonde          #+#    #+#             */
/*   Updated: 2023/11/27 17:01:41 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
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
    printf("Non Printable\n");
    printf("==============\n");
    printf("Expected: 0\n");
    printf("Result  : %d\n\n", ft_str_is_printable("\n"));
    
    printf("==============\n");
    printf("Hello 42!\n");
    printf("==============\n");
    printf("Expected: 1\n");
    printf("Result  : %d\n\n", ft_str_is_printable("Hello 42!"));

    printf("==============\n");
    printf("(empty string)\n");
    printf("==============\n");
    printf("Expected: 1\n");
    printf("Result  : %d\n\n", ft_str_is_printable(""));

    return 0;
}
*/
