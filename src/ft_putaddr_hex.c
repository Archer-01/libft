/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 10:37:42 by hhamza            #+#    #+#             */
/*   Updated: 2022/02/06 11:58:37 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putaddr_hex(unsigned long nb, const char *base)
{
	if (nb >= 0 && nb < HEXA_LEN)
		return (ft_putchar(base[nb]));
	else
		return (ft_putaddr_hex(nb / 16, base) + ft_putaddr_hex(nb % 16, base));
}
