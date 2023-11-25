/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 10:29:39 by jlefonde          #+#    #+#             */
/*   Updated: 2023/11/25 13:37:30 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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
	printf("%d\n", ft_str_is_lowercase("hello"));
	printf("%d\n", ft_str_is_lowercase("HELLO"));
	printf("%d\n", ft_str_is_lowercase("Hello 42!"));
	printf("%d\n", ft_str_is_lowercase(""));
	return(0);
}
*/
