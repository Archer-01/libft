/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 14:53:34 by hhamza            #+#    #+#             */
/*   Updated: 2022/06/08 06:44:41 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Print unsigned integer to standard output
 *
 * @param nb: Unsigned integer to print
 * @return int: Number of characters printed
 */
int	ft_putnbr_unsigned(unsigned int nb)
{
	if (nb < 10)
		return (ft_putchar(nb + '0'));
	else
		return (ft_putnbr_unsigned(nb / 10) + ft_putnbr_unsigned(nb % 10));
}
