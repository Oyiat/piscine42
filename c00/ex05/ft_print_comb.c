/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:37:35 by jlefonde          #+#    #+#             */
/*   Updated: 2023/11/26 10:04:21 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	char	digits[3];

	digits[0] = '0';
	digits[1] = '1';
	digits[2] = '2';
	while (digits[0] <= '7')
	{
		while (digits[1] <= '8')
		{
			while (digits[2] <= '9')
			{
				write(1, digits, 3);
				if (!(digits[0] == '7' && digits[1] == '8' && digits[2] == '9'))
					write(1, ", ", 2);
				digits[2]++;
			}
			digits[1]++;
			digits[2] = digits[1] + 1;
		}
		digits[0]++;
		digits[1] = digits[0] + 1;
		digits[2] = digits[1] + 1;
	}
}
