/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:19:02 by jlefonde          #+#    #+#             */
/*   Updated: 2023/12/07 10:11:52 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft_ft.h"

int	ft_get_last_bytes(int ac, char **av, int *i)
{
	int	last_bytes;

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
	char	*buf;
	int		bytes;
	int		buf_length;

	buf = (char *)malloc(SIZE);
	if (buf == NULL)
		return ;
	bytes = read(file, buf, SIZE);
	buf_length = ft_strlen(buf);
	write(STDOUT, &buf[buf_length - last_bytes], last_bytes);
	free(buf);
}

void	ft_tail(int ac, char **av)
{
	int	i;
	int	file;
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
}
