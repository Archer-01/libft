/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:54:15 by hhamza            #+#    #+#             */
/*   Updated: 2021/11/08 13:42:28 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_needle(const char *haystack, const char *needle, size_t len,
	int i)
{
	size_t	count;
	size_t	j;

	count = 0;
	j = -1;
	while (needle[++j] && i + j < len)
		if (haystack[i + j] == needle[j])
			++count;
	return (count);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	// size_t	needlelen;

	// needlelen = ft_strlen(needle);
	if (!(*needle))
		return ((char *) haystack);
	i = -1;
	while (++i < len && haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			if (ft_needle(haystack, needle, len, i) == ft_strlen(needle))
				return ((char *)(haystack + i));
		}
	}
	return (0);
}
