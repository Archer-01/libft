/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:22:30 by hhamza            #+#    #+#             */
/*   Updated: 2021/12/31 13:00:45 by hhamza           ###   ########.fr       */
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

	if (!src && !dst)
		return (0);
	i = -1;
	while (++i < n)
		((char *) dst)[i] = ((char *) src)[i];
	return (dst);
}
