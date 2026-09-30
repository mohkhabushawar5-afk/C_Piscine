#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *b1;
	size_t i;

	b1 = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		b1[i] = (unsigned char)c;
		i++;
	}
	return (b);
}	
