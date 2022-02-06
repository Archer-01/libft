/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:13:12 by hhamza            #+#    #+#             */
/*   Updated: 2021/12/31 12:59:19 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares two memory addresses content by offset
 *
 * @param s1: first memory address
 * @param s2: second memory address
 * @param n: number of bytes to compare
 * @return int: 0 if equal, difference otherwise
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
	{
		if (*((unsigned char *) s1) != *((unsigned char *) s2))
			return (*((unsigned char *) s1) - *((unsigned char *) s2));
		++s1;
		++s2;
	}
	return (0);
}
