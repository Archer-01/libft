/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:57:08 by hhamza            #+#    #+#             */
/*   Updated: 2022/02/07 11:29:07 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if character is a digit
 *
 * @param c: character to check
 * @return t_bool: TRUE for digit, false for non
 */
t_bool	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
