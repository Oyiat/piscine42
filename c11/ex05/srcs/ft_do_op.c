/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:43:10 by jlefonde          #+#    #+#             */
/*   Updated: 2023/12/10 08:04:10 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft_ft.h"

int	ft_do_op(int v1, char op, int v2)
{
	int	result;
	int	(*ft_operations[5])(int, int);

	ft_operations[0] = ft_add;
	ft_operations[1] = ft_substract;
	ft_operations[2] = ft_multiply;
	ft_operations[3] = ft_divide;
	ft_operations[4] = ft_modulo;
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
