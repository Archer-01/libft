/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:14:57 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/31 07:43:27 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Puts string to file pointed by file descriptor
 *
 * @param s: string to put
 * @param fd: file descriptor
 * @return int: Number of characters written to fd
 */
int	ft_putstr_fd(char *s, int fd)
{
	int	ret;

	if (!s)
		return (0);
	ret = 0;
	while (*s)
	{
		ret += ft_putchar_fd(*(s++), fd);
	}
	return (ret);
}
