/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:18:35 by jlefonde          #+#    #+#             */
/*   Updated: 2023/12/06 14:14:03 by jlefonde         ###   ########.fr       */
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
void	ft_display_file(int file);
void    ft_cat(int ac, char **av);
#endif
