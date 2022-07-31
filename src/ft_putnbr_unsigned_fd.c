/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 14:53:34 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/31 07:43:16 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Print unsigned integer to file descriptor.
 *
 * @param fd: File descriptor to write onto
 * @param nb: Unsigned integer to print
 * @return int: Number of characters written
 */
int	ft_putnbr_unsigned_fd(unsigned int nb, int fd)
{
	if (nb < 10)
		return (ft_putchar_fd(nb + '0', fd));
	else
		return (ft_putnbr_unsigned_fd(nb / 10, fd) + \
			ft_putnbr_unsigned_fd(nb % 10, fd));
}
