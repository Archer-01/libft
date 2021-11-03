/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:44:38 by hhamza            #+#    #+#             */
/*   Updated: 2021/11/03 10:18:41 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char * src, size_t dst_size)
{
	int	i;

	i = 0;
	while ((dst_size--) - 1)
		*(dst++) = src[i++];
	*dst = 0;
	return (ft_strlen(src));
}
