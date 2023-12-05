/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_function.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 13:01:31 by jlefonde          #+#    #+#             */
/*   Updated: 2023/12/03 13:01:51 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "print_functions.h"

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

void	ft_print_matrix(int **matrix, int dimensions)
{
	int	i;
	int	j;
	/*
	i = 1;
	while (i < dimensions - 1)
	{
		j = 1;
		while (j < dimensions - 1)
		{
			ft_putnbr(matrix[i][j]);
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	*/
	i = 0;
	while (i < dimensions)
	{
		j = 0;
		while (j < dimensions)
		{
			ft_putnbr(matrix[i][j]);
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
