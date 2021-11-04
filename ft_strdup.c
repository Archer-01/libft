/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:28:30 by hhamza            #+#    #+#             */
/*   Updated: 2021/11/04 17:39:14 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	s1_len;

	s1_len = ft_strlen(s1) + 1;
	s2 = (char *) malloc((s1_len) * sizeof(char));
	ft_strlcpy(s2, s1, s1_len);
	return (s2);
}
