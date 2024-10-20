
#include "libft.h"

static int	headfind(const char *s1, const char *set)
{
	int	s1ind;

	s1ind = 0;
	while (s1[s1ind] != '\0')
	{
		if (ft_strchr(set, s1[s1ind]) == 0)
			return (s1ind);
		s1ind++;
	}
	return (s1ind);
}

static int	tailfind(const char *s1, const char *set, int s1len)
{
	while (s1len >= 0)
	{
		if (ft_strchr(set, s1[s1len]) == 0)
			return (s1len);
		s1len--;
	}
	return (s1len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		head;
	int		tail;
	char	*str;
	int		s1len;

	if (!s1 || !set)
		return (NULL);
	s1len = ft_strlen((char *)s1);
	head = headfind(s1, set);
	tail = tailfind(s1, set, s1len);
	if (head > tail)
		return (ft_strdup(""));
	str = (char *) malloc ((tail - head + 2) * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, (s1 + head), ((tail - head) + 2));
	return (str);
}
