/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:25:08 by hhamza            #+#    #+#             */
/*   Updated: 2021/11/06 11:14:12 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstlen != 0)
	{
		if (dstsize <= srclen)
			return (srclen + dstsize);
		while (*dst)
			++dst;
		while ((dstsize--) - dstlen - 1 != 0 && *src)
			*(dst++) = *(src++);
		*dst = 0;
	}
	else
		ft_strlcpy(dst, src, srclen + 1);
	return (srclen + dstlen);
}
