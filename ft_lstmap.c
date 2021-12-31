/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:16:37 by hhamza            #+#    #+#             */
/*   Updated: 2021/12/31 12:54:56 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Maps new list by applying function to list nodes
 *
 * @param lst: list to be operated on
 * @param f: function to be applied
 * @param del: function to free memory in case of error
 * @return t_list*: newly created list, NULL on failure
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*ptr;
	void	*newcontent;

	if (!f)
		return (0);
	newlst = 0;
	if (!del)
		del = free;
	while (lst)
	{
		newcontent = (*f)(lst->content);
		ptr = ft_lstnew(newcontent);
		if (!ptr)
		{
			ft_lstclear(&newlst, del);
			return (0);
		}
		ft_lstadd_back(&newlst, ptr);
		lst = lst->next;
	}
	return (newlst);
}
