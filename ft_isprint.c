/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:23:08 by hhamza            #+#    #+#             */
/*   Updated: 2021/12/31 12:09:57 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if characted is printable
 *
 * @param c: character to check
 * @return int: 1 for printable, 0 for nonprintable
 */
int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}
