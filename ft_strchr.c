#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	casted;
	size_t	i;
	
	i = 0;
	casted = (char)c;
	while (s[i] != '\0')
	{
		if (s[i] == casted)
			return ((char *)&s[i]);
		i++;
	}
	if (casted == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
