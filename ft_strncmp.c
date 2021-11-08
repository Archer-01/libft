/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:47:58 by hhamza            #+#    #+#             */
/*   Updated: 2021/11/08 11:38:43 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while ((*s1 && *s2) && n--)
	{
		if ((unsigned char) *s1 != (unsigned char) *s2)
			return ((unsigned char) *s1 - (unsigned char) *s2);
		++s1;
		++s2;
	}
	if (n == 0)
		return (0);
	return ((unsigned char) *s1 - (unsigned char) *s2);
}
