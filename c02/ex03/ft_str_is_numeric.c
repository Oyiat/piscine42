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

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(int argc, char *argv[])
{
	printf("%d\n", ft_str_is_numeric("42424242"));
	printf("%d\n", ft_str_is_numeric("Hello 42!"));
	printf("%d\n", ft_str_is_numeric(""));
	return(0);
}
*/
