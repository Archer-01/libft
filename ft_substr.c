/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:01:36 by hhamza            #+#    #+#             */
/*   Updated: 2021/12/31 13:23:00 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Gets a substring from a string
 *
 * @param s: string to be operated on
 * @param start: start index
 * @param len: offset
 * @return char*: newly created substring, NULL on failure
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slen;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (start > slen)
	{
		substr = (char *) malloc(sizeof(char));
		*substr = 0;
	}
	else
	{
		if (start + len > slen)
			len = slen - start;
		substr = (char *) malloc(sizeof(char) * (len + 1));
		if (!substr)
			return (0);
		ft_strlcpy(substr, s + start, len + 1);
	}
	return (substr);
}
