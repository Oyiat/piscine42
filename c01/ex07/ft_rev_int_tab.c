/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 09:01:46 by jlefonde          #+#    #+#             */
/*   Updated: 2023/11/24 09:53:38 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size)
	{	
		tmp = tab[size - 1];
		tab[size - 1] = tab[i];
		tab[i] = tmp;
		i++;
		size--;
	}
}
/*
int	main(void)
{	
	int tab[5];
	int i;

	tab[0] = 1; 
	tab[1] = 2; 
	tab[2] = 3; 
	tab[3] = 4; 
	tab[4] = 5;
       	i = 0;		
	while (i < 5)
	{
		printf("%d", tab[i]);
		i++;
	}
	
	printf(" -> ");

	i = 0;
        ft_rev_int_tab(tab, 5);
	while (i < 5)
        {
                printf("%d",  tab[i]);
                i++;
        }

}
*/
