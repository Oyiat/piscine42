/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dimension.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 12:40:49 by jlefonde          #+#    #+#             */
/*   Updated: 2023/12/03 12:44:53 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "dimension.h"	

int	ft_get_dimension(char *input)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (input[i])
	{
		if (input[i] >= '1' && input[i] <= '9')
			count++;
		i++;
	}
	if (input[i - 1] == ' ')
		return (0);
	if (count % 4 == 0)
		return (count / 4);
	return (0);
}
