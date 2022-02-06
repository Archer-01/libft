/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:47:58 by hhamza            #+#    #+#             */
/*   Updated: 2021/12/31 13:15:07 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares n characters between two strings
 *
 * @param s1: first string
 * @param s2: second string
 * @param n: number of characters to compare
 * @return int: 0 if equal, difference otherwise
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] && s2[i]) && s1[i] == s2[i] && i < n - 1)
		++i;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
