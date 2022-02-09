/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doublelst_delone.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:38:00 by hhamza            #+#    #+#             */
/*   Updated: 2022/02/09 10:43:54 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Destroy double linked list node and free allocated memory
 *
 * @param lst: double linked list node to operate on
 * @param del: function pointer to destroy the content
 */
void	ft_doublelst_delone(t_double_list *lst, void (*del)(void *))
{
	ft_lstdelone((t_list *) lst, del);
}
