
#include "libft.h"

int  count_words(const char *s, char c);
char    *create_sub(const char *s, char **str_ar, int words, char c);
void    fill_sub(const char *s, char **str_ar, int words, char c);
void    *_ft_clean(char **str_ar, int count);


char	**ft_split(const char *s, char c)
{
	int		words;
	char	**str_ar;

  if(!s)
    return (NULL);
	words = count_words(s, c);
	str_ar = (char **) malloc((words + 1) * sizeof(char *));
	if (!str_ar)
		return (NULL);
	if ((create_sub(s, str_ar, words, c)) == NULL)
		return (_ft_clean(str_ar, words + 1));
	fill_sub(s, str_ar, words, c);
	return (str_ar);
}

int	count_words(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			count++;
			i++;
		}
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

char	*create_sub(const char *s, char **str_ar, int words, char c)
{
    int	j;
    int	size;

    j = 0;
    size = 0;
    while (j < words)
    {
        while (*s == c && *s != '\0')
            s++;
        while (*s != c && *s != '\0')
        {
            size++;
            s++;
        }
        str_ar[j] = malloc(size * sizeof(char) + 1);
        if (!str_ar[j])
            return (NULL);
        j++;
        size = 0;
    }
    return ("succes");
}

void	fill_sub(const char *s, char **str_ar, int words, char c)
{
	int	i;
	int	j;
	int	sub_i;

	i = 0;
	j = 0;
	sub_i = 0;
	str_ar[words] = '\0';
	while (sub_i < words)
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			while (s[i] != c && s[i] != '\0')
			{
				str_ar[sub_i][j] = s[i];
				i++;
				j++;
			}
			str_ar[sub_i][j] = '\0';
			sub_i++;
			j = 0;
		}
	}
}

void	*_ft_clean(char **strs_ar, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs_ar[i]);
		i++;
	}
	free(strs_ar);
	return (NULL);
}
