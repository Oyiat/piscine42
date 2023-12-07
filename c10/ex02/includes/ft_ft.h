/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:18:35 by jlefonde          #+#    #+#             */
/*   Updated: 2023/12/07 10:12:24 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_FT_H
# define FT_FT_H

# define STDOUT 1
# define STDERR 2
# define SIZE 29999

# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <errno.h>
# include <stdlib.h>

int		ft_str_is_numeric(char *str);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
int		ft_get_last_bytes(int ac, char **av, int *i);
void	ft_putstr(int fd, char *str);
void	ft_display_file(int file, int last_bytes);
void	ft_tail(int ac, char **av);

#endif
