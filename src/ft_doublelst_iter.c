/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doublelst_iter.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:52:12 by hhamza            #+#    #+#             */
/*   Updated: 2022/02/09 11:09:01 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Iterate over a double linked list and apply the given function to
 * each node content
 *
 * @param lst: list to operate on
 * @param f: function to be applied on each node content
 */
void	ft_doublelst_iter(t_double_list *lst, void (*f)(void *))
{
	ft_lstiter((t_list *) lst, f);
}
