/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 08:47:04 by jlefonde          #+#    #+#             */
/*   Updated: 2023/12/06 12:58:03 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft_ft.h"

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

int	ft_is_argument_valid(int ac, char **av)
{
	int	file;

	if (ac < 2)
	{
		ft_putstr(STDERR, "File name missing.\n");
		return (FILE_NAME_MISSING_ERROR);
	}
	if (ac > 2)
	{
		ft_putstr(STDERR, "Too many arguments.\n");
		return (TOO_MANY_ARGUMENTS_ERROR);
	}
	file = open(av[1], O_RDONLY);
	if (file < 0)
	{
		ft_putstr(STDERR, "Cannot read file.\n");
		return (CANNOT_OPEN_FILE_ERROR);
	}
	return (file);
}

void	ft_display_file(int file)
{
	char	buf[SIZE];
	int		bytes;

	bytes = read(file, buf, SIZE);
	if (bytes < 0)
		ft_putstr(STDERR, "Cannot read file.\n");
	else
		write(STDOUT, buf, bytes);
}

int	main(int argc, char **argv)
{
	int	file;

	file = ft_is_argument_valid(argc, argv);
	if (file > 0)
		ft_display_file(file);
	close(file);
	return (0);
}
