/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 07:54:59 by jlefonde          #+#    #+#             */
/*   Updated: 2023/12/03 11:31:07 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

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

int	ft_get_dimension(char *input)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (input[i])
	{
		if (input[i] >= '1' && input[i] <= '9')
			count++;
		i++;
	}
	if (input[i - 1] == ' ')
		return (0);
	if (count % 4 == 0)
		return (count / 4);
	return (0);
}

int	ft_is_input_valid(int argc, char **argv)
{
	int		i;
	int		dimensions;
	char	*str;

	i = 0;
	if (argc < 2 || argv[1][0] == 0)
		return (0/*FALSE*/);
	str = argv[1];
	dimensions = ft_get_dimension(str);
	if (dimensions < 4 || dimensions > 9)
		return (0);
	while (str[i])
	{
		if (!(str[i] >= '1' && str[i] <= dimensions + '0'))
			return (0/*FALSE*/);
		i++;
		if (str[i] != ' ' && str[i])
			return (0/*FALSE*/);
		if (str[i])
			i++;
	}
	return (1/*TRUE*/);
}

void	ft_fill_matrix(char *str, int ***matrix, int dimensions)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	j = 1;
	i = (dimensions - 2) * 2;
	while (j < dimensions - 1)
	{
		(*matrix)[0][j] = str[k] - '0';
		(*matrix)[dimensions - 1][j++] = str[i] - '0';
		k += 2;
		i += 2;
	}
	j = 1;
	k = (dimensions - 2) * 6;
	while (j < dimensions - 1)
	{
		(*matrix)[j][0] = str[i] - '0';
		(*matrix)[j++][dimensions - 1] = str[k] - '0';
		i += 2;
		k += 2;
	}
}

void	ft_init_matrix(char *str, int ***matrix, int dimensions)
{
	int	i;

	i = 0;
	*matrix = (int **)malloc(dimensions * sizeof(int *));
	while (i < dimensions)
	{
		(*matrix)[i] = (int *)malloc(dimensions * sizeof(int));
		i++;
	}
	ft_fill_matrix(str, matrix, dimensions);
}

void	ft_print_matrix(int **matrix, int dimensions)
{
	int	i;
	int	j;

	/*i = 1;
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
	}*/
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

int	main(int argc, char **argv)
{
	int	**matrix;
	int	dimensions;
	int	i;

	if (!ft_is_input_valid(argc, argv))
	{
		write(1, "ERROR\n"/*ERRORMSG*/, 6);
		return (-1);
	}
	dimensions = ft_get_dimension(argv[1]);
	ft_init_matrix(argv[1], &matrix, dimensions + 2);
	ft_print_matrix(matrix, dimensions + 2);
	i = 0;
	while (i < dimensions + 2)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
	return (0);
}
