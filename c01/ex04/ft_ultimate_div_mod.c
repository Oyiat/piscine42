/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 07:49:43 by jlefonde          #+#    #+#             */
/*   Updated: 2023/11/24 11:26:44 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	*pt_a;
	int	*pt_b;
	
	a = 10;
	b = 2;
	pt_a = &a;
	pt_b = &b;
	
	printf("%d / %d = ", a, b);	
	ft_ultimate_div_mod(pt_a, pt_b);
	printf("%d (%d)\n", *pt_a, *pt_b);

	a = 15;
	b = 4;
	printf("%d / %d = ", a, b);
        ft_ultimate_div_mod(pt_a, pt_b);
        printf("%d (%d)", *pt_a, *pt_b);
	
	return (0);
}
*/
