/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:02:22 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/31 07:43:05 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Write unsigned integer in hexadecimal representation to file
 * descriptor.
 *
 * @param nb: unsigned integer to print
 * @param base: lowercase/uppercase hexadecimal base
 * @return int: Number of characters written to fd
 */
int	ft_putnbr_hex_fd(unsigned int nb, const char *base, int fd)
{
	if (nb < HEXA_LEN)
		return (ft_putchar_fd(base[nb], fd));
	else
		return (ft_putnbr_hex_fd(nb / HEXA_LEN, base, fd) \
		+ ft_putnbr_hex_fd(nb % HEXA_LEN, base, fd));
}
