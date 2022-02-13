/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doublelst_addback.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:06:33 by hhamza            #+#    #+#             */
/*   Updated: 2022/02/13 13:44:42 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Append node to double linked list
 *
 * @param lst: list to operate on
 * @param new: new node to append
 */
void	ft_doublelst_addback(t_double_list **lst, t_double_list *new)
{
	t_double_list	*old_last;
	t_double_list	*new_last;

	if (lst == NULL || new == NULL)
		return ;
	old_last = ft_doublelst_last(*lst);
	ft_lstadd_back((t_list **) lst, (t_list *) new);
	new_last = ft_doublelst_last(*lst);
	new_last->prev = old_last;
}
