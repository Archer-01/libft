/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:54:15 by hhamza            #+#    #+#             */
/*   Updated: 2021/12/31 13:22:45 by hhamza           ###   ########.fr       */
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

/**
 * @brief Searches for string inside another string
 *
 * @param haystack: string to be operated on
 * @param needle: string to find
 * @param len: number of bytes to search
 * @return char*: memory address of needle found in haystack, NULL on failure
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

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
