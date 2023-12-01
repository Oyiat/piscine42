/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:40:30 by jlefonde          #+#    #+#             */
/*   Updated: 2023/11/30 17:11:04 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 0;
	while (sqrt * sqrt != nb)
	{
		if (sqrt == nb || sqrt > 46340)
			return (0);
		sqrt++;
	}
	return (sqrt);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_sqrt(1));
	return (0);
}
*/
