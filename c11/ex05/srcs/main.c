/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 08:04:23 by jlefonde          #+#    #+#             */
/*   Updated: 2023/12/10 08:05:24 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft_ft.h"

int	main(int argc, char **argv)
{
	int	result;

	if (argc == 4)
	{
		result = ft_do_op(ft_atoi(argv[1]), argv[2][0], ft_atoi(argv[3]));
		if (!((argv[2][0] == '/' || argv[2][0] == '%') && result == -1))
		{
			ft_putnbr(result);
			ft_putchar('\n');
		}
	}
}
