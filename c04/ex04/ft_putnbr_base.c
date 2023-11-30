/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:35:37 by jlefonde          #+#    #+#             */
/*   Updated: 2023/11/30 11:46:41 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

long	ft_print_sign(int nbr)
{
	long	nb;

	nb = (long)nbr;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb == 0)
		ft_putchar('0');
	return (nb);
}

int	ft_is_base_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		digits[10];
	int		i;
	long	nb;

	if (ft_is_base_valid(base))
	{
		i = 0;
		nb = ft_print_sign(nbr);
		while (nb)
		{
			digits[i++] = (nb % ft_strlen(base));
			nb /= ft_strlen(base);
		}
		i--;
		while (i >= 0)
		{
			ft_putchar(base[digits[i]]);
			i--;
		}
	}
}
/*
int	main(void)
{
	ft_putnbr_base(42, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(42, "01");
	ft_putchar('\n');
	ft_putnbr_base(42, "0123456789ABCDEF");
	ft_putchar('\n');
	ft_putnbr_base(42, "poneyvif");
	ft_putchar('\n');
	ft_putchar('\n');
	ft_putnbr_base(-42, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(-42, "01");
	ft_putchar('\n');
	ft_putnbr_base(-42, "0123456789ABCDEF");
	ft_putchar('\n');
	ft_putnbr_base(-42, "poneyvif");
	ft_putchar('\n');
	ft_putnbr_base(-2147483648, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(2147483647, "0123456789");
	return (0);
}
*/
