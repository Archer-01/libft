/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:25:08 by hhamza            #+#    #+#             */
/*   Updated: 2021/11/03 12:06:24 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ret;

	ret = ft_strlen(dst) + ft_strlen(src);
	while (*dst)
		++dst;
	while ((dstsize--) - ft_strlen(src) - 1)
		*(dst++) = *(src++);
	*dst = 0;
	return (ret);
}
