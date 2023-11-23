/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 08:44:41 by jlefonde          #+#    #+#             */
/*   Updated: 2023/11/23 09:35:45 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

// Display the character passed as a parameter
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
int main(void) 
{
	ft_putchar('A');
	return (0);
}
*/