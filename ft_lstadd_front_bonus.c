/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:02:36 by hhamza            #+#    #+#             */
/*   Updated: 2021/12/31 12:12:28 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Prepends a list with a new node
 *
 * @param lst: list to be prepended to
 * @param new: new node to prepend
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	if (new)
		new->next = *lst;
	*lst = new;
}
