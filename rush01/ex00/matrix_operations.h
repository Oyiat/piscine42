/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_operations.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 12:35:46 by jlefonde          #+#    #+#             */
/*   Updated: 2023/12/03 13:11:59 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef MATRIX_OPERATIONS_H
#define MATRIX_OPERATIONS_H

void	ft_fill_matrix(char *str, int ***matrix, int dimensions);
void	ft_init_matrix(char *str, int ***matrix, int dimensions);
void	ft_print_matrix(int **matrix, int dimensions);
void	ft_free_matrix(int **matrix, int dimensions);
int		ft_is_input_valid(int argc, char **argv);

#endif // MATRIX_OPERATIONS_H
