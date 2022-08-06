/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 11:30:23 by hhamza            #+#    #+#             */
/*   Updated: 2022/08/06 12:03:27 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_digits(unsigned long num)
{
	size_t	count;

	count = 0;
	while (num != 0)
	{
		++count;
		num /= 10;
	}
	return (count);
}

static unsigned long	ft_ten_power(unsigned long exp)
{
	unsigned long	i;
	unsigned long	result;

	i = 0;
	result = 1;
	while (i < exp)
	{
		result *= 10;
		++i;
	}
	return (result);
}

static unsigned long	ft_abs(long num)
{
	if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}
}

double	ft_atof(char const *str)
{
	char			*dot;
	long			int_part;
	unsigned long	frac_part;
	short			sign;
	double			result;

	sign = 1;
	dot = ft_strchr(str, '.');
	if (dot == NULL)
	{
		return (ft_atoi(str));
	}
	*dot = '\0';
	int_part = ft_atoi(str);
	if (int_part < 0)
	{
		sign = -1;
	}
	frac_part = ft_atoi(dot + 1);
	result = ft_abs(int_part);
	result += (double) frac_part / ft_ten_power(ft_count_digits(frac_part));
	return (sign * result);
}
