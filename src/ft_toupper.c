/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:52:08 by hhamza            #+#    #+#             */
/*   Updated: 2022/06/08 09:48:28 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * @brief Makes character uppercase
 *
 * @param c: character to be operated on
 * @return int: newly created uppercase character as an int
 */
int	ft_toupper(int c)
{
	if (ft_islower(c))
	{
		return (c - ('a' - 'A'));
	}
	else
	{
		return (c);
	}
}
