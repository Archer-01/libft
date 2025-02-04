/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:23:41 by hhamza            #+#    #+#             */
/*   Updated: 2025/02/04 12:58:15 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_lstsplit(t_list *lst)
{
	t_list	*slow;
	t_list	*fast;
	t_list	*mid;

	if (!lst || !lst->next)
	{
		return (NULL);
	}
	slow = lst;
	fast = lst->next;
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	mid = slow->next;
	slow->next = NULL;
	return (mid);
}

static t_list	*ft_lstmerge(t_list *a, t_list *b, int (*cmp)(void*, void*))
{
	t_list	*result;

	if (!a)
	{
		return (b);
	}
	if (!b)
	{
		return (a);
	}
	if (cmp(a->content, b->content) <= 0)
	{
		result = a;
		result->next = ft_lstmerge(a->next, b, cmp);
	}
	else
	{
		result = b;
		result->next = ft_lstmerge(a, b->next, cmp);
	}
	return (result);
}

void	ft_lstsort(t_list **lst, int (*cmp)(void*, void*))
{
	t_list	*mid;
	t_list	*left;
	t_list	*right;

	if (!lst || !*lst || !(*lst)->next)
	{
		return ;
	}
	mid = ft_lstsplit(*lst);
	left = *lst;
	right = mid;
	ft_lstsort(&left, cmp);
	ft_lstsort(&right, cmp);
	*lst = ft_lstmerge(left, right, cmp);
}
