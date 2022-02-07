/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:02:22 by hhamza            #+#    #+#             */
/*   Updated: 2022/02/07 11:54:39 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Print unsigned integer in hexadecimal representation to standard
 * output
 *
 * @param nb: unsigned integer to print
 * @param base: lowercase/uppercase hexadecimal base
 * @return int: Number of characters printed
 */
int	ft_putnbr_hex(unsigned int nb, const char *base)
{
	if (nb >= 0 && nb < HEXA_LEN)
		return (ft_putchar(base[nb]));
	else
		return (ft_putnbr_hex(nb / HEXA_LEN, base) \
		+ ft_putnbr_hex(nb % HEXA_LEN, base));
}
