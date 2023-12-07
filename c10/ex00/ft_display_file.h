/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:21:05 by jlefonde          #+#    #+#             */
/*   Updated: 2023/12/06 10:46:28 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_DISPLAY_FILE_H
# define FT_DISPLAY_FILE_H

# define STDOUT 1
# define STDERR 2
# define SIZE 4096
# define FILE_NAME_MISSING_ERROR -1
# define TOO_MANY_ARGUMENTS_ERROR -2
# define CANNOT_OPEN_FILE_ERROR -3

# include <unistd.h>
# include <fcntl.h>

int		ft_is_argument_valid(int ac, char **av);
void	ft_putstr(int fd, char *str);
void	ft_display_file(int file);

#endif
