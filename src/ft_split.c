
#include "libft.h"

char		*create_sub(const char *s, char **str_ar, int n_word, char c);
void		fill_sub(const char *s, char **str_ar, int n_word, char c);
size_t		count_words(const char *s, char c);
static void	*ft_clean(char **str_ar, int count);

char	**ft_split(const char *s, char c)
{
	int		n_word;
	char	**str_ar;

	n_word = count_words(s, c);
	str_ar = (char **) malloc((n_word + 1) * sizeof(char *));
	if (!str_ar)
		return (NULL);
	if ((create_sub(s, str_ar, n_word, c)) == NULL)
		return (ft_clean(str_ar, n_word));
	fill_sub(s, str_ar, n_word, c);
	return (str_ar);
}

size_t	count_words(const char *s, char c)
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

char	*create_sub(const char *s, char **str_ar, int n_word, char c)
{
	int	j;
	int	size;

	j = 0;
	size = 0;
	while (j < n_word)
	{
		while (*s)
		{
			while (*s == c && *s)
				s++;
			while (*s != c && *s)
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
	}
	return ("succes");
}

void	fill_sub(const char *s, char **str_ar, int n_word, char c)
{
	int	i;
	int	j;
	int	sub_i;

	i = 0;
	j = 0;
	sub_i = 0;
	str_ar[n_word] = '\0';
	while (sub_i < n_word)
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

static void	*ft_clean(char **strs_ar, int count)
{
	int	i;

	i = 0;
    count += 1;
	while (i < count)
	{
		free(strs_ar[i]);
		i++;
	}
	free(strs_ar);
	return (NULL);
}
