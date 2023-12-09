/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:43:10 by jlefonde          #+#    #+#             */
/*   Updated: 2023/12/09 15:48:28 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

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

int	ft_str_to_int(char *str, int i)
{
	int	number;

	number = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	return (number);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	number;

	i = 0;
	sign = 0;
	number = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	number = ft_str_to_int(str, i);
	if ((sign % 2) == 1)
		return (-number);
	return (number);
}

int	ft_add(int v1, int v2)
{
	return (v1 + v2);
}

int	ft_substract(int v1, int v2)
{
	return (v1 - v2);
}

int	ft_multiply(int v1, int v2)
{
	return (v1 * v2);
}

int	ft_divide(int v1, int v2)
{
	if (v2 == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (-1);
	}
	return (v1 / v2);
}

int	ft_modulo(int v1, int v2)
{
	if (v2 == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (-1);
	}
	return (v1 % v2);
}

int (*ft_operations[5])(int, int) = {ft_add, ft_substract, ft_multiply, ft_divide, ft_modulo};

int ft_do_op(int v1, char op, int v2)
{
	int result;

	result = 0;
	if (op == '+')
		result = (*ft_operations[0])(v1, v2);
	else if (op == '-')
		result = (*ft_operations[1])(v1, v2);
	else if (op == '*')
		result = (*ft_operations[2])(v1, v2);
	else if (op == '/')
		result = (*ft_operations[3])(v1, v2);
	else if (op == '%')
		result = (*ft_operations[4])(v1, v2);
	return (result);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		ft_putnbr(ft_do_op(ft_atoi(argv[1]), argv[2][0], ft_atoi(argv[3])));
		ft_putchar('\n');
	}
}
