/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlefonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:06:14 by jlefonde          #+#    #+#             */
/*   Updated: 2023/11/27 13:45:27 by jlefonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_char_is_alphanumeric(char c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_first_letter;

	is_first_letter = 1;
	i = 0;
	while (str[i])
	{
		if (ft_char_is_alphanumeric(str[i]))
		{
			if (is_first_letter)
			{
				ft_strupcase(&str[i]);
				is_first_letter = 0;
			}
			else
				ft_strlowcase(&str[i]);
		}
		else
			is_first_letter = 1;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main(void)
{
    char str1[] = "salut, comment tu vas ?";
    printf("==============\n");
    printf("hello\n");
    printf("==============\n");
    printf("Expected: Salut, Comment Tu Vas ?\n");
    printf("Result  : %s\n\n", ft_strcapitalize(str1));
    
    char str2[] = "42mots quarante-deux; cinquante+et+un";
    printf("==============\n");
    printf("hello\n");
    printf("==============\n");
    printf("Expected: 42mots Quarante-Deux; Cinquante+Et+Un\n");
    printf("Result  : %s\n\n", ft_strcapitalize(str2));

    char str3[] = "";
    printf("==============\n");
    printf("(empty string)\n");
    printf("==============\n");
    printf("Expected: (empty string)\n");
    printf("Result  : %s\n\n", ft_strcapitalize(str3));

    return 0;
}
*/
