/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 07:37:38 by jlefonde          #+#    #+#             */
/*   Updated: 2023/12/04 13:44:21 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ints;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ints = (int *)malloc((max - min) * sizeof(int));
	if (ints == NULL)
		return (-1);
	while (i < max - min)
	{
		ints[i] = min + i;
		i++;
	}
	*range = ints;
	return (max - min);
}
/*
#include <stdio.h>

int main()
{
    int i;
    int *ints;
    int size;

    i = 0;
    size = ft_ultimate_range(&ints, 0, 11);
    while (i < 11)
    {
        printf("%d ", ints[i]);
        i++;
    }
    free(ints);
    return 0;
}
*/
