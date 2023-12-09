/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 08:00:55 by jlefonde          #+#    #+#             */
/*   Updated: 2023/12/09 09:50:07 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*base;

	i = -1;
	base = "0123456789abcdef";
	while (str[++i])
	{
		if ((str[i] <= 31 && str[i] >= 0) || str[i] == 127)
		{
			write(1, "\\", 1);
			if (str[i] < 16)
				write(1, "0", 1);
			if (str[i] > 16)
			{
				while (str[i])
				{
					write(1, &base[str[i] % 16], 1);
					str[i] /= 16;
				}
			}
			write(1, &base[(unsigned char)str[i]], 1);
		}
		else
			write (1, &str[i], 1);
	}
}
/*
int main() {
    char str[] = "Coucou\ntu vas bien ?\t";
    ft_putstr_non_printable(str);
    return 0;
}
*/
