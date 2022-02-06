/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:28:30 by hhamza            #+#    #+#             */
/*   Updated: 2021/12/31 13:21:48 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Duplicates the string entered as a parameter
 *
 * @param str: string to duplicate
 * @return char*: duplicated string, NULL on failure
 */
char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	s1_len;

	s1_len = ft_strlen(s1) + 1;
	s2 = (char *) malloc((s1_len) * sizeof(char));
	if (!s2)
		return (0);
	ft_strlcpy(s2, s1, s1_len);
	return (s2);
}
