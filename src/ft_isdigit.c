/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:57:08 by hhamza            #+#    #+#             */
/*   Updated: 2021/12/31 12:08:46 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if character is a digit
 *
 * @param c: character to check
 * @return int: 1 for digit, 0 for nondigit
 */
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
