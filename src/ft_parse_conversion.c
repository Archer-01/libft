/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_conversion.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 09:59:15 by hhamza            #+#    #+#             */
/*   Updated: 2022/02/06 11:58:30 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_parse_conversion(char conversion, va_list *ap)
{
	if (conversion == 'c')
		return (ft_putchar(va_arg(*ap, int)));
	else if (conversion == 's')
		return (ft_putstr(va_arg(*ap, char *)));
	else if (conversion == 'p')
		return (ft_putstr("0x") \
		+ ft_putaddr_hex(va_arg(*ap, unsigned long), HEXA_LOWER));
	else if (conversion == 'd' || conversion == 'i')
		return (ft_putnbr(va_arg(*ap, int)));
	else if (conversion == 'u')
		return (ft_putnbr_unsigned(va_arg(*ap, unsigned int)));
	else if (conversion == 'x')
		return (ft_putnbr_hex(va_arg(*ap, unsigned int), HEXA_LOWER));
	else if (conversion == 'X')
		return (ft_putnbr_hex(va_arg(*ap, unsigned int), HEXA_UPPER));
	else if (conversion == '%')
		return (ft_putchar('%'));
	else
		return (ft_putchar(conversion));
	return (0);
}
