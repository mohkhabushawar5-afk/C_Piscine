#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst1;
	const unsigned char	*src1;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	dst1 = (unsigned char *)dst;
	src1 = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst);
}
