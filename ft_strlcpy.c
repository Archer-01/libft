/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:44:38 by hhamza            #+#    #+#             */
/*   Updated: 2021/12/31 13:11:51 by hhamza           ###   ########.fr       */
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

	srclen = ft_strlen(src);
	if (dstsize)
	{
		while ((dstsize--) - 1 && *src)
			*(dst++) = *(src++);
		*dst = 0;
	}
	return (srclen);
}
