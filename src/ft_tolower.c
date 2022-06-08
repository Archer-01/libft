/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:00:02 by hhamza            #+#    #+#             */
/*   Updated: 2022/06/08 09:48:52 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

/**
 * @brief Makes character lowercase
 *
 * @param c: character to be operated on
 * @return int: newly created lowercase character as an int
 */
int	ft_tolower(int c)
{
	if (ft_isupper(c))
	{
		return (c + ('a' - 'A'));
	}
	else
	{
		return (c);
	}
}
