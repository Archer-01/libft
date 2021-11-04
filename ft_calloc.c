/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:13:16 by hhamza            #+#    #+#             */
/*   Updated: 2021/11/04 17:14:00 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;
	size_t	j;

	ptr = malloc(count * size);
	i = 0;
	while (i < count)
	{
		j = 0;
		while (j < size)
			((char *) ptr)[(size * i) + j++] = 0;
		++i;
	}
	return (ptr);
}
