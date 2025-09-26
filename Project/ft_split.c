/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 18:32:06 by aiturral          #+#    #+#             */
/*   Updated: 2025/09/25 19:08:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"
#include <stdlib.h>

char	*word_dup(const char *start, int len)
{
	int		it;
	char	*word;

	word = (char *)malloc(sizeof(char) * (len +1));
	if (!word)
		return (NULL);
	it = 0;
	while (it < len)
	{
		word[it] = start[it];
		it++;
	}
	word[len] = '\0';
	return (word);
}

int	process_word(char **result, int it, const char **s, char c)
{
	const char	*start;
	int			len;

	start = *s;
	len = 0;
	while (**s && **s != c)
	{
		len++;
		(*s)++;
	}
	result[it] = word_dup(start, len);
	if (!result[it])
	{
		while (it--)
			free(result[it]);
		free(result);
		return (0);
	}
	return (1);
}

int	fill_words(char **result, const char *s, char c)
{
	int	it;

	it = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (!process_word(result, it, &s, c))
				return (0);
			it++;
		}
		else
			s++;
	}
	result[it] = NULL;
	return (1);
}

int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	if (!fill_words(result, s, c))
	{
		free(result);
		return (NULL);
	}
	return (result);
}
