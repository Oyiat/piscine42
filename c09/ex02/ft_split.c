/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 08:25:31 by jlefonde          #+#    #+#             */
/*   Updated: 2023/12/10 08:56:53 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

typedef struct s_fill
{
	char	**result;
	char	*str;
	char	*char_set;
	int		*i;
	int		*j;
}	t_fill;

int	is_in_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_chars(char *str, char *charset)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (!is_in_charset(str[i], charset))
			count++;
		i++;
	}
	return (count);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

void	fill(t_fill *data)
{
	int	len;

	len = 1;
	while (data->str[*data->i + len]
		&& !is_in_charset(data->str[*data->i + len], data->char_set))
		len++;
	data->result[*data->j] = (char *)malloc((len + 1) * sizeof(char));
	if (data->result[*data->j] == NULL)
		return ;
	ft_strncpy(data->result[*data->j], &data->str[*data->i], len);
	data->result[*data->j][len] = '\0';
	*data->i += len;
	(*data->j)++;
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		char_count;
	char	**result;
	t_fill	data;

	i = 0;
	j = 0;
	char_count = count_chars(str, charset);
	result = (char **)malloc((char_count + 1) * sizeof(char *));
	data.result = result;
	data.str = str;
	data.char_set = charset;
	data.i = &i;
	data.j = &j;
	while (str[i])
	{
		if (!is_in_charset(str[i], charset))
			fill(&data);
		else
			i++;
	}
	result[j] = 0;
	return (result);
}
/*
#include <stdio.h>

int main() {
    int	i;
    char **result = ft_split("!Hello 42!! 43! 44!", "!");

	i = 0;
    while(result[i])
	{
       	printf("%s\n", result[i]);
        free(result[i]);
		i++;
    }
    free(result);
    return 0;
}
*/
