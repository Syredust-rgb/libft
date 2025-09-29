/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiturral <aiturral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 18:02:35 by aiturral          #+#    #+#             */
/*   Updated: 2025/09/29 17:38:28 by aiturral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*join_strings(size_t s1_len, size_t s2_len,
	char const *s1, char const*s2)
{
	size_t	it;
	size_t	it2;
	char	*strjoin;

	strjoin = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!strjoin)
		return (NULL);
	it = 0;
	while (it < s1_len)
	{
		strjoin[it] = s1[it];
		it++;
	}
	it2 = 0;
	while (it2 < s2_len)
	{
		strjoin[it + it2] = s2[it2];
		it2++;
	}
	strjoin[s1_len + s2_len] = '\0';
	return (strjoin);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	strjoin = join_strings(s1_len, s2_len, s1, s2);
	return (strjoin);
}
