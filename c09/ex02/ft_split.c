/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:10:03 by jlefonde          #+#    #+#             */
/*   Updated: 2023/12/06 08:20:13 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == 0)
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
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

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = (char *)malloc(ft_strlen(src) + 1);
	if (dest == NULL)
		return (NULL);
	ft_strncpy(dest, src, ft_strlen(src) + 1);
	return (dest);
}

char **ft_split(char *str, char *charset)
{
	int		i;
	int		len;
	char	**result;
	char	*substring;

	i = 0;
	result = NULL;
	len = 0;
	substring = NULL;
	while (str[i])
	{
		substring = ft_strstr(&str[i], charset);
		if (substring)
		{
			len = substring - &str[i];
			printf("%d\n", len);
			//char *t = ft_strdup(&str[i]);
			i += len;
        }
		i++;
    }
    return result;
}

int main()
{
    ft_split("Hello 42! 43! 44!", "l!");
    return 0;
}
