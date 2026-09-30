/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabushaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 17:29:33 by mabushaw          #+#    #+#             */
/*   Updated: 2026/09/30 17:37:25 by mabushaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
