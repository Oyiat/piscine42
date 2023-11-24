/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 09:54:24 by jlefonde          #+#    #+#             */
/*   Updated: 2023/11/24 11:14:26 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	sorted;
	int	i;
	int	tmp;

	while (!sorted)
	{
		i = 0;
		sorted = 1;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				sorted = 0;
			}
			i++;
		}
	}	
}
/*
int	main(void)
{
	int	tab[9];
	int	i;

	tab[0] = 19;
	tab[1] = 17;
	tab[2] = 15;
	tab[3] = 12;
	tab[4] = 16;
	tab[5] = 18;
	tab[6] = 4;
	tab[7] = 11;
	tab[8] = 13;
	i = 0;
	while (i < 9)
	{
		printf("%d ", tab[i]);
		i++;
	}

	printf("\n");
	i = 0;	
	ft_sort_int_tab(tab, 9);
	while (i < 9)
        {
                printf("%d ", tab[i]);
                i++;
        }
}
*/
