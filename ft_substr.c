/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:01:36 by hhamza            #+#    #+#             */
/*   Updated: 2021/11/09 15:22:45 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slen;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (start > slen)
	{
		substr = (char *) malloc(sizeof(char));
		*substr = 0;
	}
	else
	{
		if (start + len > slen)
			len = slen;
		substr = (char *) malloc(sizeof(char) * (len + 1));
		if (!substr)
			return (0);
		ft_strlcpy(substr, s + start, len + 1);
	}
	return (substr);
}
