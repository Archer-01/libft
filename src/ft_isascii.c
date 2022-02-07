/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:15:34 by hhamza            #+#    #+#             */
/*   Updated: 2022/02/07 11:31:33 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if a character is ascii
 *
 * @param c: character to check
 * @return t_bool: TRUE for ascii, FALSE for non
 */
t_bool	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
