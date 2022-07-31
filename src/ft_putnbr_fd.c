/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:26:55 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/31 07:42:33 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Puts a number onto a file pointed by a file descriptor
 *
 * @param n: number to put
 * @param fd: file descriptor
 * @return int: number of characters written to fd
 */
int	ft_putnbr_fd(int n, int fd)
{
	if (n >= 0 && n <= 9)
		return (ft_putchar_fd(n + '0', fd));
	else if (n == -2147483648)
		return (write(fd, "-2147483648", 11));
	else if (n < 0)
	{
		return (ft_putchar_fd('-', fd) + ft_putnbr_fd(-n, fd));
	}
	else
	{
		return (ft_putnbr_fd(n / 10, fd) + ft_putnbr_fd(n % 10, fd));
	}
}
