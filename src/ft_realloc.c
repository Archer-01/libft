/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 18:58:05 by hhamza            #+#    #+#             */
/*   Updated: 2022/08/04 09:53:23 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Re-allocate a memory block
 *
 * @param ptr: The pointer to the memory block to re-allocate
 * @param size: The size of the new memory block
 * @return void*: The pointer to the new memory block
 */
void	*ft_realloc(void *ptr, size_t size)
{
	void	*tmp;
	size_t	i;

	if (size == 0)
	{
		free(ptr);
		return (ft_calloc(0, 0));
	}
	if (ptr == NULL)
	{
		return (ft_calloc(1, size));
	}
	tmp = ptr;
	ptr = ft_calloc(1, size);
	if (ptr == NULL)
	{
		free(tmp);
		return (NULL);
	}
	i = 0;
	while (((char *) tmp)[i] != '\0')
		++i;
	ft_memcpy(ptr, tmp, i);
	free(tmp);
	return (ptr);
}
