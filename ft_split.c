#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	word;

	count = 0;
	word = 0;
	while (*s)
	{
		if (*s != c && !word)
		{
			count++;
			word = 1;
		}
		else if (*s == c)
			word = 0;
		s++;
	}
	return (count);
}

static char	**free_s1(char **s1, size_t i)
{
	while (i > 0)
		free(s1[--i]);
	free(s1);
	return (NULL);
}

static char	**fill(char **s1, const char *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (s[len] && s[len] != c)
				len++;
			s1[i] = ft_substr(s, 0, len);
			if (!s1[i])
				return (free_s1(s1, i));
			i++;
			s += len;
		}
		else
			s++;
	}
	s1[i] = NULL;
	return (s1);
}

char	**ft_split(char const *s, char c)
{
	char	**s1;

	if (!s)
		return (NULL);
	s1 = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s1)
		return (NULL);
	return (fill(s1, s, c));
}
