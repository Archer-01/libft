/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:52:45 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/31 07:26:30 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Puts a character to file pointed by file descriptor
 *
 * @param c: character to put
 * @param fd: file descriptor
 * @return int: Number of written bytes
 */
int	ft_putchar_fd(char c, int fd)
{
	return (write(fd, &c, 1));
}
