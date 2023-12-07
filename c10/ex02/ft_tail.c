/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:19:02 by jlefonde          #+#    #+#             */
/*   Updated: 2023/12/07 09:28:50 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_tail.h"
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	number;

	i = 0;
	number = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		number = number * 10 + (str[i++] - '0');
	return (number);
}

void	ft_putstr(int fd, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], sizeof(char));
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_get_last_bytes(int ac, char **av, int *i)
{
	int last_bytes;

	last_bytes = 0;
	if (av[1][0] == '-' && av[1][1] == 'c')
	{
		last_bytes = ft_atoi(av[1] + 2);
		if (ac > 3 && ft_str_is_numeric(av[2]))
		{
			*i = 3;
			last_bytes = ft_atoi(av[2]);
		}
	}
	return (last_bytes);
}

void	ft_display_file(int file, int last_bytes)
{
	char	buf[SIZE];
	int		bytes;
	int		buf_length;

	bytes = read(file, buf, SIZE);
	buf_length = ft_strlen(buf);
	write(STDOUT, &buf[buf_length - last_bytes], last_bytes);
}

void	ft_tail(int ac, char **av)
{
	int	i;
	int file;
	int	last_bytes;

	i = 2;
	last_bytes = ft_get_last_bytes(ac, av, &i);
	while (i < ac)
	{
		file = open(av[i], O_RDONLY);
		if (file < 0)
		{
			ft_putstr(STDERR, "ft_tail: cannot open '");
			ft_putstr(STDERR, av[i]);
			ft_putstr(STDERR, "' for reading: ");
			ft_putstr(STDERR, strerror(errno));
			ft_putstr(STDERR, "\n");
		}
		else
			ft_display_file(file, last_bytes);
		close(file);
		i++;
	}
}

int	main(int argc, char **argv)
{
	ft_tail(argc, argv);
	return (0);
}
