/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:23:33 by hhamza            #+#    #+#             */
/*   Updated: 2021/12/31 13:21:31 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Maps a new string based of the specified one by applying a function
 *
 * @param s: string to be operated on
 * @param f: function to apply on each character
 * @return char*: newly created mapped string, NULL on failure
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;

	if (!s || !f)
		return (0);
	res = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!res)
		return (0);
	i = -1;
	while (s[++i])
		res[i] = (*f)(i, s[i]);
	res[i] = 0;
	return (res);
}
