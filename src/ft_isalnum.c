/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:09:05 by hhamza            #+#    #+#             */
/*   Updated: 2022/02/07 11:31:03 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Check if a character is alphanumeric
 *
 * @param c: character to check
 * @return t_bool: TRUE for alphanumeric, FALSE for non
 */
t_bool	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
