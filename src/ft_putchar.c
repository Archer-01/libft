/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 09:36:30 by hhamza            #+#    #+#             */
/*   Updated: 2022/02/07 11:39:40 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Print a char to standard output
 *
 * @param c: character to print
 * @return int: number of characters printed
 */
int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}
