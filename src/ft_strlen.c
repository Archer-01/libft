/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:29:28 by hhamza            #+#    #+#             */
/*   Updated: 2021/12/31 13:12:05 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Calculates length of a string
 *
 * @param str: string to be operated on
 * @return size_t: length of the string
 */
size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*(s++))
		++len;
	return (len);
}
