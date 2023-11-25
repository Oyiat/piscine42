/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:27:49 by jlefonde          #+#    #+#             */
/*   Updated: 2023/11/24 11:30:46 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
int	main(void)
{
	int number1 = 0;
	int number2 = 15;

	int *pt_number1 = &number1;
	int *pt_number2 = &number2;
	
	printf("%d | %d\n", number1, number2);	
	ft_swap(pt_number1, pt_number2);
	printf("%d | %d", number1, number2);

	return (0);
}
*/
