/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 08:07:38 by jlefonde          #+#    #+#             */
/*   Updated: 2023/12/10 08:08:26 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft_ft.h"

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
