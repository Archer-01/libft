/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:59:25 by hhamza            #+#    #+#             */
/*   Updated: 2021/11/05 18:43:11 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n && *((unsigned char *) s) != (unsigned char) c)
	{
		--n;
		++s;
	}
	if (*((unsigned char *) s) == (unsigned char) c)
		return ((void *) s);
	return (0);
}
