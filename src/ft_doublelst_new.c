/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doublelst_new.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 08:38:51 by hhamza            #+#    #+#             */
/*   Updated: 2022/02/09 14:50:15 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Create double linked list node
 *
 * @param content: content of the node
 * @return t_double_list*: newly created node, NULL on failure
 */
t_double_list	*ft_doublelst_new(void *content)
{
	t_double_list	*node;

	node = (t_double_list *) malloc(sizeof(t_double_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}
