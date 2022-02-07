/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:23:08 by hhamza            #+#    #+#             */
/*   Updated: 2022/02/07 11:32:20 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if characted is printable
 *
 * @param c: character to check
 * @return t_bool: TRUE for printable, FALSE for non
 */
t_bool	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}
