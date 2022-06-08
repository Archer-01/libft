/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:23:05 by hhamza            #+#    #+#             */
/*   Updated: 2022/06/08 09:52:04 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Gets last occurence of character in a string
 *
 * @param s: string to be operated on
 * @param c: character to find
 * @return char*: memory address of the last occurence of c
 */
char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (len > 0 && s[len] != (char) c)
	{
		--len;
	}
	if (s[len] == (char) c)
	{
		return ((char *) &s[len]);
	}
	else
	{
		return (NULL);
	}
}
