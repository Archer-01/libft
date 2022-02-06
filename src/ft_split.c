/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:21:50 by hhamza            #+#    #+#             */
/*   Updated: 2021/12/31 13:22:11 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_wc(char const *s, char c)
{
	unsigned int	start;
	unsigned int	end;
	unsigned int	wc;
	unsigned int	i;

	wc = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			++i;
		start = i;
		end = start;
		while (s[end] != c && s[end])
			++end;
		if (start < end)
			++wc;
		i = end;
	}
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

static int	ft_free(char *word, char **words, unsigned int wc)
{
	unsigned int	i;

	if (word)
		return (0);
	i = -1;
	while (++i < wc)
		free(words[i]);
	free(words);
	return (1);
}

/**
 * @brief Splits a string into an array of strings based on a separator
 *
 * @param s: string to be operated on
 * @param c: character to split by
 * @return char**: memory adress of array of splitted strings, NULL on failure
 */
char	**ft_split(char const *s, char c)
{
	char			**words;
	unsigned int	wc;
	unsigned int	start;
	unsigned int	end;
	unsigned int	i;

	if (!s)
		return (0);
	wc = ft_wc(s, c);
	words = (char **) malloc(sizeof(char *) * (wc + 1));
	if (!words)
		return (0);
	start = 0;
	i = -1;
	while (++i < wc)
	{
		while (s[start] == c && s[start])
			++start;
		words[i] = ft_getword(s, c, start, &end);
		if (ft_free(words[i], words, i))
			return (0);
		start = end;
	}
	words[i] = 0;
	return (words);
}
