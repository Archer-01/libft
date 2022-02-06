/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:26:08 by hhamza            #+#    #+#             */
/*   Updated: 2021/12/31 13:02:10 by hhamza           ###   ########.fr       */
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

/**
 * @brief Copies from memory address to another (supports overlap)
 *
 * @param dst: destination memory address
 * @param src: source memory address
 * @param len: number of bytes to be copied
 * @return void*: destination memory address
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!len)
		return (dst);
	else if (src - dst < 0)
		return (ft_memmove_overlap(dst, src, len));
	else
		return (ft_memcpy(dst, src, len));
}
