/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:05:19 by hhamza            #+#    #+#             */
/*   Updated: 2021/12/31 13:22:03 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Gets first occurence of character in a string
 *
 * @param s: string to be operated on
 * @param c: character to find
 * @return char*: memory address of the first occurence of c, NULL if not found
 */
char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char) c)
		++s;
	if (*s == (char) c)
		return ((char *) s);
	return (0);
}
