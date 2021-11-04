/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:09:33 by hhamza            #+#    #+#             */
/*   Updated: 2021/11/04 15:56:37 by hhamza           ###   ########.fr       */
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

int	ft_atoi(const char *str)
{
	int	num;
	int	sign;

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
		++str;
	}
	return (sign * num);
}
