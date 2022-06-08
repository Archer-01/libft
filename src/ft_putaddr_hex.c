/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 10:37:42 by hhamza            #+#    #+#             */
/*   Updated: 2022/06/08 06:44:23 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Print address to standard
 *
 * @param nb: Address to print
 * @param base: lowercase/uppercase hexadecimal base
 * @return int: Number of characters printed
 */
int	ft_putaddr_hex(unsigned long nb, const char *base)
{
	if (nb < HEXA_LEN)
		return (ft_putchar(base[nb]));
	else
		return (ft_putaddr_hex(nb / 16, base) + ft_putaddr_hex(nb % 16, base));
}
