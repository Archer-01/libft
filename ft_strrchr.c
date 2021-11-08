/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:23:05 by hhamza            #+#    #+#             */
/*   Updated: 2021/11/08 11:24:27 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	if (s[len] == 0 && (char) c == 0)
		return ((char *) s + len);
	while (len > 0 && s[len - 1] != (char) c)
		--len;
	if (s[len - 1] == (char) c)
		return ((char *)(s + len - 1));
	return (0);
}
