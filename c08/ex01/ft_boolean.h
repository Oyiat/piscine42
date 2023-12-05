/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:41:44 by jlefonde          #+#    #+#             */
/*   Updated: 2023/12/04 15:06:39 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# define TRUE 1
# define FALSE 0
# define SUCCESS 0
# define EVEN(n) (((n) % 2) == 0)
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

# include <unistd.h>

typedef int	t_bool;

void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);

#endif // FT_BOOLEAN_H
