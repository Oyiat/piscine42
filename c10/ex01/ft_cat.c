/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:19:02 by jlefonde          #+#    #+#             */
/*   Updated: 2023/12/06 15:24:05 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_cat.h"

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

void	ft_display_file(int file)
{
	char	buf[SIZE];
	int		bytes;

	bytes = read(file, buf, SIZE);
	write(STDOUT, buf, bytes);
}

void	ft_cat(int ac, char **av)
{
	int	i;
	int file;

	i = 1;
	while (i < ac)
	{
		file = open(av[i], O_RDONLY);
		if (file < 0)
		{
			ft_putstr(STDERR, "ft_cat: ");
			ft_putstr(STDERR, av[i]);
			ft_putstr(STDERR, ": ");
			ft_putstr(STDERR, strerror(errno));
			ft_putstr(STDERR, "\n");
		}
		else
			ft_display_file(file);
		close(file);
		i++;
	}
}

int	main(int argc, char **argv)
{
	ft_cat(argc, argv);
	return (0);
}
