/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:13:11 by hhamza            #+#    #+#             */
/*   Updated: 2021/12/31 12:03:48 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Fill memory address s offseted by n with zeroes
 *
 * @param s: memory address
 * @param n: number of bytes to fill
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
