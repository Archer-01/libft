/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:52:08 by hhamza            #+#    #+#             */
/*   Updated: 2021/12/31 13:25:57 by hhamza           ###   ########.fr       */
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
		return (c - ('a' - 'A'));
	return (c);
}
