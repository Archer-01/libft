/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doublelst_map.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:03:13 by hhamza            #+#    #+#             */
/*   Updated: 2022/02/09 11:22:24 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Map new double linked list by applying the given function to each node
 * content
 *
 * @param lst: doube linked list to operate on
 * @param f: function to be applied on each node content
 * @param del: function to free allocated memory in case of failure
 * @return t_double_list*: newly created double linked list, NULL on failure
 */
t_double_list	*ft_doublelst_map(t_double_list *lst, void *(*f)(void *), \
	void (*del)(void *))
{
	t_double_list	*newlst;
	t_double_list	*node;
	void			*newcontent;

	if (f == NULL)
		return (NULL);
	if (del == NULL)
		del = &free;
	newlst = NULL;
	while (lst != NULL)
	{
		newcontent = (*f)(lst->content);
		node = ft_doublelst_new(newcontent);
		if (node == NULL)
		{
			ft_doublelst_clear(&lst, del);
			return (NULL);
		}
		ft_doublelst_addback(&newlst, node);
		lst = lst->next;
	}
	return (newlst);
}
