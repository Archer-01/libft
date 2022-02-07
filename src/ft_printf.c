/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 09:33:10 by hhamza            #+#    #+#             */
/*   Updated: 2022/02/07 11:15:49 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_parse_conversion(char conversion, va_list *ap)
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

/**
 * @brief Print formatted message to standard output (Similar to libc's printf)
 *
 * @param format: Format string
 * @param ...: Variables matching the format string
 * @return int: Number of characters printed
 */
int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		written;
	int		i;

	va_start(ap, format);
	written = 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
			written += ft_parse_conversion(format[++i], &ap);
		else
			written += ft_putchar(format[i]);
		++i;
	}
	va_end(ap);
	return (written);
}
