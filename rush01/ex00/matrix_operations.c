/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 12:34:30 by jlefonde          #+#    #+#             */
/*   Updated: 2023/12/03 13:13:51 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include "matrix_operations.h"
#include "dimension.h"

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

void	ft_free_matrix(int **matrix, int dimensions)
{
	int	i;

	i = 0;
	while (i < dimensions)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
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
