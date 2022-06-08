/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:22:30 by hhamza            #+#    #+#             */
/*   Updated: 2022/06/08 07:59:57 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies from memory address to another
 *
 * @param dst: destination memory address
 * @param src: source memory address
 * @param n: number of bytes to be copied
 * @return void*: destination memory address
 */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*char_src;
	char	*char_dst;

	if (src == NULL && dst == NULL)
	{
		return (0);
	}
	char_src = (char *) src;
	char_dst = (char *) dst;
	i = 0;
	while (i < n)
	{
		char_dst[i] = char_src[i];
		++i;
	}
	return (dst);
}
