/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 07:37:38 by jlefonde          #+#    #+#             */
/*   Updated: 2023/12/04 17:10:35 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ints;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	ints = (int *)malloc((max - min) * sizeof(int));
	if (ints == NULL)
		return (NULL);
	while (i < max - min)
	{
		ints[i] = min + i;
		i++;
	}
	return (ints);
}
#include <stdio.h>

int	main()
{
	int	i;
	int *ints;

	i = 0;
	ints = ft_range(1, 11);
	while (i < 10)
	{
		printf("%d ", ints[i]);
		i++;
	}
	free(ints);
	return (0);
}
