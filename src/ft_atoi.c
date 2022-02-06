/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:09:33 by hhamza            #+#    #+#             */
/*   Updated: 2021/12/31 12:02:32 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
		|| c == ' ');
}

static int	ft_issign(char c)
{
	return (c == '+' || c == '-');
}

static int	ft_check_long(unsigned long long num, int sign)
{
	unsigned long long	long_max;

	long_max = 9223372036854775807;
	if (num >= (long_max + 1) && sign == 1)
		return (-1);
	else if (num >= (long_max) && sign == -1)
		return (0);
	return (1);
}

/**
 * @brief Converts the integer part of str to integer
 *
 * @param str: string to convert
 * @return int: converted string, 0 if invalid
 */
int	ft_atoi(const char *str)
{
	unsigned long long	num;
	int					sign;
	int					long_check;

	num = 0;
	sign = 1;
	while (ft_isspace(*str))
		++str;
	if (ft_issign(*str))
	{
		if (*str == '-')
			sign *= -1;
		++str;
	}
	while (ft_isdigit(*(str)))
	{
		num = (num * 10) + (*str - '0');
		long_check = ft_check_long(num, sign);
		if (long_check != 1)
			return (long_check);
		++str;
	}
	return (sign * num);
}
