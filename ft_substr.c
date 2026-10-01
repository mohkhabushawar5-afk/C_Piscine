#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	i;
	size_t	len1;

	i = 0;
	if (!s)
		return (NULL);
	len1 = ft_strlen(s);
	if (start >= len1)
		return (ft_strdup(""));
	if (len > len1 - start)
		len = len1  - start;
	s1 = malloc(len + 1);
	if (!s1)
		return (NULL);
	while (i < len && s[start])
	{
		s1[i] = s[start];
		start++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
