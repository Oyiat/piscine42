/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 10:29:39 by jlefonde          #+#    #+#             */
/*   Updated: 2023/11/25 14:19:02 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 0 && str[i] <= 31)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{	
	char non_printable = 1;
	printf("%d\n", ft_str_is_printable(&non_printable));
	printf("%d\n", ft_str_is_printable("hello"));
	printf("%d\n", ft_str_is_printable("Hello 42!"));
	printf("%d\n", ft_str_is_printable(""));
	return(0);
}
