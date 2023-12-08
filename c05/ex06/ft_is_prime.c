/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 07:43:54 by jlefonde          #+#    #+#             */
/*   Updated: 2023/12/01 09:05:54 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while ((i * i) <= nb && i <= 46340)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(-1));
	printf("%d\n", ft_is_prime(7));
	printf("%d\n", ft_is_prime(97));
	printf("%d\n", ft_is_prime(50));
	printf("%d\n", ft_is_prime(2147483647));
	printf("%d\n", ft_is_prime(-2147483648));
}

