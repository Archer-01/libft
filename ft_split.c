/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:21:50 by hhamza            #+#    #+#             */
/*   Updated: 2021/11/06 14:23:28 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_wc(char const *s, char c)
{
	unsigned int	wc;

	wc = 0;
	while (*s)
		if (*(s++) == c)
			++wc;
	if (*(s - 1) == c)
		++wc;
	return (wc);
}

static char	*ft_getword(char const *s, char c, unsigned int start,
	unsigned int *end)
{
	char	*word;

	*end = start;
	while (s[*end] != c && s[*end])
		++(*end);
	word = ft_substr(s, start, *end - start);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char			**words;
	unsigned int	wc;
	unsigned int	start;
	unsigned int	end;
	unsigned int	i;

	wc = ft_wc(s, c);
	words = (char **) malloc(sizeof(char *) * (wc + 1));
	start = 0;
	end = 0;
	i = 0;
	while (wc--)
	{
		words[i++] = ft_getword(s, c, start, &end);
		if (s[end])
			start = end + 1;
	}
	words[i] = 0;
	return (words);
}
