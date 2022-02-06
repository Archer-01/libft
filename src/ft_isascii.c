/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:15:34 by hhamza            #+#    #+#             */
/*   Updated: 2021/12/31 12:07:57 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if a character is ascii
 *
 * @param c: character to check
 * @return int: 1 for ascii, 0 for nonascii
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
