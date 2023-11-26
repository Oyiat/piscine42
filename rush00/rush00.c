/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:56:23 by jlefonde          #+#    #+#             */
/*   Updated: 2023/11/26 09:18:07 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void    ft_putchar(char);

void	ft_fill_rectangle(int x, int y, char rectangle[y][x]) {
	int	i;
	int	j;
	
	if (x > 0 && y > 0) {
		rectangle[0][0] = 'o';
		rectangle[y - 1][0] = 'o';
		rectangle[0][x - 1] = 'o';
		rectangle[y - 1][x - 1] = 'o';

		i = 1;
		while (i < x - 1) {
			rectangle[y - 1][i] = '-';
			rectangle[0][i] = '-';
			i++;
		}

        	j = 1;
        	while (j < y - 1) {
            		rectangle[j][0] = '|';
            		rectangle[j][x - 1] = '|';
			i = 1;
            		while (i < x - 1) {
                		rectangle[j][i] = ' ';
                		i++;
			}
            		j++;
        	}
	}
}

void	rush(int x, int y) {
	char	rectangle[y][x];
	int		i;
	int		j;
	
	ft_fill_rectangle(x, y, rectangle);
	i = 0;
	while (i < y) {
		j = 0;
		while (j < x) {
			ft_putchar(rectangle[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
