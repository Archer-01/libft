/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:02:22 by hhamza            #+#    #+#             */
/*   Updated: 2022/02/06 11:58:46 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_hex(unsigned int nb, const char *base)
{
	if (nb >= 0 && nb < HEXA_LEN)
		return (ft_putchar(base[nb]));
	else
		return (ft_putnbr_hex(nb / HEXA_LEN, base) \
		+ ft_putnbr_hex(nb % HEXA_LEN, base));
}
