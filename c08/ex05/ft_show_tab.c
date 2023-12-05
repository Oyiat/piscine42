/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 07:37:21 by jlefonde          #+#    #+#             */
/*   Updated: 2023/12/05 07:49:54 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft_strs_to_tab.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		digits[10];
	int		i;
	long	nbr;

	i = 0;
	nbr = (long)nb;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr == 0)
		ft_putchar('0');
	while (nbr)
	{
		digits[i] = (nbr % 10);
		nbr /= 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(digits[i] + '0');
		i--;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != NULL)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		if (par[i].copy != NULL)
		{
			ft_putstr(par[i].copy);
			ft_putchar('\n');
		}
		i++;
	}
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	struct s_stock_str *strs = ft_strs_to_tab(argc, argv);

	ft_show_tab(strs);
}
*/
