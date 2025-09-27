/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiturral <aiturral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 16:16:37 by aiturral          #+#    #+#             */
/*   Updated: 2025/09/27 11:42:34 by aiturral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t static	ft_compare(const char *haystack, const char *needle,
		size_t check, size_t len)
{
	size_t	check_it;

	check_it = 0;
	while (haystack[check] == needle[check_it] && check < len
		&& haystack[check] && needle[check_it])
	{
		check++;
		check_it++;
	}
	return (check_it);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	check_it;
	size_t	check;
	size_t	it;
	size_t	needle_len;

	if (!haystack || !needle || !len)
		return (NULL);
	needle_len = ft_strlen (needle);
	if (needle_len == 0)
		return ((char *)haystack);
	it = 0;
	while (haystack[it] && len > it)
	{
		if (haystack[it] == needle[0])
		{
			check = it;
			check_it = ft_compare(haystack, needle, check, len);
			if (check_it == needle_len)
				return ((char *)&haystack[it]);
		}
		it++;
	}
	return (NULL);
}
