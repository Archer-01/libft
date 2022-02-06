/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 09:53:19 by hhamza            #+#    #+#             */
/*   Updated: 2021/12/31 12:10:48 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digitcount(int n)
{
	int	digitcount;

	if (n == 0)
		return (1);
	digitcount = 0;
	if (n < 0)
		++digitcount;
	while (n != 0)
	{
		++digitcount;
		n /= 10;
	}
	return (digitcount);
}

/**
 * @brief Converts integer to string
 *
 * @param n: number to convert
 * @return char*: newly created converted string
 */
char	*ft_itoa(int n)
{
	int		digitcount;
	char	*res;

	digitcount = ft_digitcount(n);
	res = (char *) malloc(sizeof(char) * (digitcount + 1));
	if (!res)
		return (0);
	res[digitcount] = 0;
	if (n < 0)
		res[0] = '-';
	else if (n == 0)
		res[0] = '0';
	while (n != 0)
	{
		if (n == -2147483648)
			res[--digitcount] = '8';
		else
		{
			if (n < 0)
				n *= -1;
			res[--digitcount] = (n % 10) + '0';
		}
		n /= 10;
	}
	return (res);
}
