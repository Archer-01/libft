/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doublelst_last.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 09:50:40 by hhamza            #+#    #+#             */
/*   Updated: 2022/02/09 10:36:35 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Get the last node of a double linked list
 *
 * @param lst: list to operate on
 * @return t_double_list*: last element
 */
t_double_list	*ft_doublelst_last(t_double_list *lst)
{
	return ((t_double_list *) ft_lstlast((t_list *) lst));
}
