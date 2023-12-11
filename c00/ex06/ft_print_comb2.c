/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:37:35 by jlefonde          #+#    #+#             */
/*   Updated: 2023/12/10 11:10:19 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(char i, char j, char k, char l)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(' ');
	ft_putchar(k);
	ft_putchar(l);
	if (i != '9' || j != '8' || k != '9' || l != '9')
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	char	i;
	char	j;
	char	k;
	char	l;

	i = '/';
	while (++i <= '9')
	{
		j = '/';
		while (++j <= '9')
		{
			k = '/';
			while (++k <= '9')
			{
				l = '/';
				while (++l <= '9')
				{
					if (i < k || (i == k && j < l))
						ft_print_comb(i, j, k, l);
				}
			}
		}
	}
}
/*
int main()
{
    ft_print_comb2();
    return 0;
}
*/
