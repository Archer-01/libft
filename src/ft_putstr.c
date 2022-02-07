/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 10:14:58 by hhamza            #+#    #+#             */
/*   Updated: 2022/02/07 11:41:50 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Print string to to standard output
 *
 * @param str: string to print
 * @return int: Number of characters printed
 */
int	ft_putstr(const char *str)
{
	int	written;
	int	i;

	if (str == NULL)
		return (write(1, "(null)", 6));
	written = 0;
	i = 0;
	while (str[i] != '\0')
	{
		written += ft_putchar(str[i]);
		++i;
	}
	return (written);
}
