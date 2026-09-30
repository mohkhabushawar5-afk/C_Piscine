/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabushaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 18:03:33 by mabushaw          #+#    #+#             */
/*   Updated: 2026/09/30 18:17:07 by mabushaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;
	size_t	index2;

	index = 0;
	if (needle[index] == '\0')
		return ((char *)haystack);
	while (haystack[index] != '\0' && index < len)
	{
		index2 = 0;
		while (index + index2 < len
			&& haystack[index + index2] == needle[index2]
			&& haystack[index + index2] != '\0')
		{
			if (needle[index2 + 1] == '\0')
				return ((char *)&haystack[index]);
			index2++;
		}
		index++;
	}
	return (NULL);
}
