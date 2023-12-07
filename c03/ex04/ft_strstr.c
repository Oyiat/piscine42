/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 08:07:24 by jlefonde          #+#    #+#             */
/*   Updated: 2023/11/28 17:16:50 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0])
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1])
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
    printf("%s\n", ft_strstr("Hello 42!", " "));
    printf("%s\n", ft_strstr("Hello 42!", "50"));
    return (0);
}
*/
