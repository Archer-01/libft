/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:05:19 by hhamza            #+#    #+#             */
/*   Updated: 2022/06/08 09:50:11 by hhamza           ###   ########.fr       */
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
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != (char) c)
	{
		++i;
	}
	if (s[i] == (char) c)
	{
		return ((char *) &s[i]);
	}
	else
	{
		return (NULL);
	}
}
