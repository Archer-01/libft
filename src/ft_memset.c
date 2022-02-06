/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:41:55 by hhamza            #+#    #+#             */
/*   Updated: 2021/12/31 13:03:36 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Sets len bytes on memory adress to the given value
 *
 * @param b: memory address to operate on
 * @param c: character to be set on memory
 * @param len: number of bytes to set
 * @return void*: memory address of b
 */
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = -1;
	while (++i < len)
		((unsigned char *) b)[i] = (unsigned char) c;
	return (b);
}
