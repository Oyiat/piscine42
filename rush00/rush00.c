/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:56:23 by jlefonde          #+#    #+#             */
/*   Updated: 2023/11/25 17:39:52 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void    ft_putchar(char);
//void    print_rectangle(int, int, int, int);

void	fill(int i, int j, char rectangle[i][j])
{
	if (i == 0 && j == 0)
		rectangle[i][j] = 'o';
}

void	rush(int x, int y)
{
	char	rectangle[x][y];
	int		i;
	int		j;
	
	i = 0;
	while (i < x)
	{
		j = 0;
		while (j < y)
		{
			fill(i, j, rectangle);
			ft_putchar(rectangle[i][j]);	
			j++;
		}
		i++;
	}
}
