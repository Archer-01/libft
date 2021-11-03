/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:13:12 by hhamza            #+#    #+#             */
/*   Updated: 2021/11/03 14:49:23 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n-- && *((unsigned char *) s1) == *((unsigned char *) s2))
	{
		++s1;
		++s2;
	}
	return (*((unsigned char *) s1) - *((unsigned char *) s2));
}