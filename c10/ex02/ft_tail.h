/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:18:35 by jlefonde          #+#    #+#             */
/*   Updated: 2023/12/07 07:35:28 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_CAT_H
# define FT_CAT_H

# define STDOUT 1
# define STDERR 2
# define SIZE 29999

# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <errno.h>

void	ft_putstr(int fd, char *str);
void	ft_display_file(int file, int last_bytes);
void    ft_cat(int ac, char **av);
#endif
