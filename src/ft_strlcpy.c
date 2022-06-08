/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:44:38 by hhamza            #+#    #+#             */
/*   Updated: 2022/06/08 09:43:29 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies a string into another
 *
 * @param dst: destination string
 * @param src: source string
 * @param dstsize: number of characters to be copied ('\0' included)
 * @return size_t: length of source string
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	i;

	srclen = ft_strlen(src);
	if (dstsize == 0)
	{
		return (srclen);
	}
	i = 0;
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = '\0';
	return (srclen);
}
