/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 11:33:22 by jlefonde          #+#    #+#             */
/*   Updated: 2023/12/03 11:37:17 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "matrix_operations.h"
#include "dimension.h"
#include "print_functions.h"

int	main(int argc, char **argv)
{
	int	**matrix;
	int	dimensions;

	if (!ft_is_input_valid(argc, argv))
	{
		write(1, "ERROR\n"/*ERRORMSG*/, 6);
		return (-1);
	}
	dimensions = ft_get_dimension(argv[1]);
	ft_init_matrix(argv[1], &matrix, dimensions + 2);
	ft_print_matrix(matrix, dimensions + 2);
	ft_free_matrix(matrix, dimensions + 2);
	return (0);
}
