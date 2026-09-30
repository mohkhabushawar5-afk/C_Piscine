#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst1;
	const unsigned char	*src1;

	if (!dst && !src)
		return (NULL);
	dst1 = (unsigned char *)dst;
	src1 = (const unsigned char *)src;
	if (dst1 > src1)
	{
		while (len > 0)
		{
			len--;
			dst1[len] = src1[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
