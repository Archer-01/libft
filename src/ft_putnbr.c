/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 14:37:19 by hhamza            #+#    #+#             */
/*   Updated: 2022/02/06 11:58:55 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int nb)
{
	if (nb >= 0 && nb < 10)
		return (ft_putchar(nb + '0'));
	else if (nb == -2147483648)
		return (ft_putstr("-2147483648"));
	else if (nb < 0)
		return (ft_putchar('-') + ft_putnbr(-nb));
	else
		return (ft_putnbr(nb / 10) + ft_putnbr(nb % 10));
}
