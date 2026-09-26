#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	casted;
	int		i;
	int		count;

	i = 0;
	count = -1;
	casted = (char)c;
	while (s[i] != '\0')
	{
		if (s[i] == casted)
			count = i;
		i++;
	}
	if (casted == '\0')
		return ((char *)&s[i]);
	if (count >= 0)
		return ((char *)&s[count]);
	return (NULL);
}
