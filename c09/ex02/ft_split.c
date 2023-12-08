#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	count_chars(char *str, char *charset)
{
	int count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != charset[0] && str[i] != charset[1])
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

char	**ft_split(char *str, char *charset)
{
	int	i;
	int	j;
	int	char_count;
	int	len;
	char **result;

	i = 0;
	j = 0;
	char_count = count_chars(str, charset);
	result = (char **)malloc((char_count + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	while (str[i])
	{
		if (str[i] != charset[0] && str[i] != charset[1])
		{
			len = 1;
			while (str[i + len] && str[i + len] != charset[0] && str[i + len] != charset[1])
			{
				len++;
			}
			result[j] = (char *)malloc((len + 1) * sizeof(char));
			if (result[j] == NULL)
				return (NULL);
			ft_strncpy(result[j], &str[i], len);
			result[j][len] = '\0';
			i += len;
			j++;
		}
		else
		{
			i++;
		}
	}
	result[j] = 0;
	return (result);
}

int main() {
    int	i;
    char **result = ft_split("Hello 42! 43! 44!", " ");

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

