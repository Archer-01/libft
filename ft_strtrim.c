/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:29:36 by hhamza            #+#    #+#             */
/*   Updated: 2021/12/31 13:19:55 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char const c, char const *set)
{
	while (*set)
		if (c == *(set++))
			return (1);
	return (0);
}

/**
 * @brief Trims characters in set from string beginning and end
 *
 * @param s1: string to trim
 * @param set: set of characters to be trimmed
 * @return char*: newly created trimmed string
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	size_t			end;

	if (!s1 || !set)
		return (0);
	start = 0;
	while (ft_isset(s1[start], set) && s1[start])
		++start;
	end = ft_strlen(s1) - 1;
	while (end > start && ft_isset(s1[end], set))
		--end;
	return (ft_substr(s1, start, end - start + 1));
}
