/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:46:57 by hhamza            #+#    #+#             */
/*   Updated: 2021/12/31 13:11:25 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Concatenates two strings to the first one by a certain size threshold
 *
 * @param dst: destination string
 * @param src: source string
 * @param dstsize: destination size threshold ('\0' included)
 * @return size_t: length of string attempted to be created
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	i;

	i = 0;
	srclen = ft_strlen(src);
	if (dstsize)
	{
		while (*(dst + i) && i < dstsize)
			++i;
		ft_strlcpy(dst + i, src, dstsize - i);
	}
	return (srclen + i);
}
