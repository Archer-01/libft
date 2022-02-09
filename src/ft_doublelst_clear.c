/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doublelst_clear.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:45:00 by hhamza            #+#    #+#             */
/*   Updated: 2022/02/09 10:51:43 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Clear double linked list and free all memory allocated
 *
 * @param lst: double linked list to operate on
 * @param del: function pointer to destroy content
 */
void	ft_doublelst_clear(t_double_list **lst, void (*del)(void *))
{
	ft_lstclear((t_list **) lst, del);
}
