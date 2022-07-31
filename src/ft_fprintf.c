/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 09:33:10 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/31 07:41:41 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_parse_conversion(char conversion, va_list *ap, int fd)
{
	if (conversion == 'c')
		return (ft_putchar_fd(va_arg(*ap, int), fd));
	else if (conversion == 's')
		return (ft_putstr_fd(va_arg(*ap, char *), fd));
	else if (conversion == 'p')
		return (ft_putstr_fd("0x", fd) \
		+ ft_putaddr_hex_fd(va_arg(*ap, unsigned long), HEXA_LOWER, fd));
	else if (conversion == 'd' || conversion == 'i')
		return (ft_putnbr_fd(va_arg(*ap, int), fd));
	else if (conversion == 'u')
		return (ft_putnbr_unsigned_fd(va_arg(*ap, unsigned int), fd));
	else if (conversion == 'x')
		return (ft_putnbr_hex_fd(va_arg(*ap, unsigned int), HEXA_LOWER, fd));
	else if (conversion == 'X')
		return (ft_putnbr_hex_fd(va_arg(*ap, unsigned int), HEXA_UPPER, fd));
	else if (conversion == '%')
		return (ft_putchar_fd('%', fd));
	else
		return (ft_putchar_fd(conversion, fd));
	return (0);
}

/**
 * @brief Print formatted message to file descriptor (Similar to libc's fprintf)
 *
 * @param fd: File descriptor to write onto
 * @param format: Format string
 * @param ...: Variables matching the format string
 * @return int: Number of characters written to fd
 */
int	ft_fprintf(int fd, const char *format, ...)
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
			written += ft_parse_conversion(format[++i], &ap, fd);
		else
			written += ft_putchar_fd(format[i], fd);
		++i;
	}
	va_end(ap);
	return (written);
}
