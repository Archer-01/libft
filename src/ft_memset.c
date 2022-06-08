/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:41:55 by hhamza            #+#    #+#             */
/*   Updated: 2022/06/08 06:40:38 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Sets len bytes on memory adress to the given value
 *
 * @param addr: memory address to operate on
 * @param val: character to be set on memory
 * @param len: number of bytes to set
 * @return void*: operated on memory address
 */
void	*ft_memset(void *addr, int val, size_t len)
{
	size_t			i;
	unsigned char	*uchar_ptr;

	uchar_ptr = (unsigned char *) addr;
	i = 0;
	while (i < len)
	{
		uchar_ptr[i] = (unsigned char) val;
		++i;
	}
	return (addr);
}
