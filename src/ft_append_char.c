/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_append_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 19:08:19 by hhamza            #+#    #+#             */
/*   Updated: 2022/08/03 20:03:39 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Append char to another string (With no leaks)
 *
 * @param str: String to append to
 * @param c: Character to append
 * @return char*: New string
 */
char	*ft_append_char(char *str, char c)
{
	size_t	len;

	if (str == NULL)
	{
		len = 0;
	}
	else
	{
		len = ft_strlen(str);
	}
	str = ft_realloc(str, len + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	str[len] = c;
	str[len + 1] = '\0';
	return (str);
}
