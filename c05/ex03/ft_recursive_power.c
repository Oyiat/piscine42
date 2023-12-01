/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 08:26:15 by jlefonde          #+#    #+#             */
/*   Updated: 2023/11/30 16:35:00 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power != 0)
		return (ft_recursive_power(nb, power - 1) * nb);
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_power(3, 3));
	printf("%d\n", ft_recursive_power(3, 0));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(0, 1));
	printf("%d\n", ft_recursive_power(3, -1));
	return (0);
}
*/
