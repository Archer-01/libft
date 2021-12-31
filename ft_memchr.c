/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:59:25 by hhamza            #+#    #+#             */
/*   Updated: 2021/12/31 12:58:02 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Finds first occurence of c in s
 *
 * @param s: memory address to operate on
 * @param c: character to find
 * @param n: max offset to be searched
 * @return void*: memory address of first occurence
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*((unsigned char *) s) == (unsigned char) c)
			return ((void *) s);
		++s;
	}
	return (0);
}
