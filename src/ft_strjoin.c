/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 10:07:37 by hhamza            #+#    #+#             */
/*   Updated: 2021/12/31 13:21:40 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Joins two strings into a new one
 *
 * @param s1: first string
 * @param s2: second string
 * @return char*: newly created joined string, NULL on failure
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 && !s2)
		return (0);
	if (!s1 && s2)
		return (ft_strdup(s2));
	else if (s1 && !s2)
		return (ft_strdup(s1));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	res = (char *) malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!res)
		return (0);
	*res = 0;
	ft_strlcpy(res, s1, s1_len + 1);
	ft_strlcat(res, s2, s1_len + s2_len + 1);
	return (res);
}
