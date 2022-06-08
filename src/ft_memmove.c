/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:26:08 by hhamza            #+#    #+#             */
/*   Updated: 2022/06/08 09:36:50 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_memmove_overlap(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*char_dst;
	char	*char_src;

	char_src = (char *) src;
	char_dst = (char *) dst;
	i = len - 1;
	while (i > 0)
	{
		char_dst[i] = char_src[i];
		--i;
	}
	char_dst[i] = char_src[i];
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
	if (len == 0)
	{
		return (dst);
	}
	else if (src - dst < 0)
	{
		return (ft_memmove_overlap(dst, src, len));
	}
	else
	{
		return (ft_memcpy(dst, src, len));
	}
}
