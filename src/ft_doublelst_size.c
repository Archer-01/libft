/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doublelst_size.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 09:23:17 by hhamza            #+#    #+#             */
/*   Updated: 2022/02/09 09:31:39 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Calculate double linked list size
 *
 * @param lst: double linked list to operate on
 * @return int: double linked list size
 */
int	ft_doublelst_size(t_double_list *lst)
{
	return (ft_lstsize((t_list *) lst));
}
