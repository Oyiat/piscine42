/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 07:50:57 by jlefonde          #+#    #+#             */
/*   Updated: 2023/12/10 07:55:59 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_FT_H
# define FT_FT_H

# include <unistd.h>

int		ft_do_op(int v1, char op, int v2);
int		ft_add(int v1, int v2);
int		ft_substract(int v1, int v2);
int		ft_multiply(int v1, int v2);
int		ft_divide(int v1, int v2);
int		ft_modulo(int v1, int v2);
int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);

#endif
