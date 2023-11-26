/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:21:31 by jlefonde          #+#    #+#             */
/*   Updated: 2023/11/26 10:03:25 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

// Display the lowercase alphabet in ascending order
void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';
	while (letter >= 'a')
	{
		write(1, &letter, 1);
		letter--;
	}
}
