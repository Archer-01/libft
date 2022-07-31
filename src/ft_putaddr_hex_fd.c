/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr_hex_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 10:37:42 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/31 07:42:03 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Print address to file descriptor in hexadecimal format.
 *
 * @param fd: File descriptor to write onto
 * @param nb: Address to print
 * @param base: lowercase/uppercase hexadecimal base
 * @return int: Number of characters written to fd
 */
int	ft_putaddr_hex_fd(unsigned long nb, const char *base, int fd)
{
	if (nb < HEXA_LEN)
		return (ft_putchar_fd(base[nb], fd));
	else
		return (ft_putaddr_hex_fd(nb / 16, base, fd) + \
			ft_putaddr_hex_fd(nb % 16, base, fd));
}
