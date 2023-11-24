/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 07:33:15 by jlefonde          #+#    #+#             */
/*   Updated: 2023/11/24 07:49:22 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{	
	int	a;
	int 	b;
	int	div;
	int	mod;
	int*	pt_div;
	int*	pt_mod;
	
	a = 10;
	b = 2;
	div = 0;
	mod = 0;
	pt_div = &div;
	pt_mod = &mod;

	ft_div_mod(a, b, pt_div, pt_mod);
	printf("%d / %d = %d (%d)\n", a, b, div, mod);
	
	a = 15;
	b = 4;
	ft_div_mod(a, b, pt_div, pt_mod);	
	printf("%d / %d = %d (%d)", a, b, div, mod);
}
*/
