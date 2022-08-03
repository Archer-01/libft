/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_append_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 19:51:48 by hhamza            #+#    #+#             */
/*   Updated: 2022/08/03 20:02:44 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Append string to another string (With no leaks)
 *
 * @param s1: First string
 * @param s2: Second string
 * @return char*: New string
 */
char	*ft_append_str(char *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;

	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s1 == NULL)
	{
		len1 = 0;
	}
	else
	{
		len1 = ft_strlen(s1);
	}
	len2 = ft_strlen(s2);
	s1 = ft_realloc(s1, len1 + len2 + 1);
	if (s1 == NULL)
	{
		return (NULL);
	}
	ft_strlcat(s1 + len1, s2, len2 + 1);
	return (s1);
}
