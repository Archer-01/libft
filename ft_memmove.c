/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:26:08 by hhamza            #+#    #+#             */
/*   Updated: 2021/11/12 00:37:12 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_memmove_overlap(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = len;
	while (--i > 0)
		((char *) dst)[i] = ((char *) src)[i];
	((char *) dst)[i] = ((char *) src)[i];
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!len)
		return (dst);
	else if (src - dst < 0)
		return (ft_memmove_overlap(dst, src, len));
	else
		return (ft_memcpy(dst, src, len));
}
