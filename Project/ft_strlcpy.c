/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiturral <aiturral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 11:54:04 by aiturral          #+#    #+#             */
/*   Updated: 2025/09/20 12:24:00 by aiturral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	it;

	it = 0;
	if (dstsize != 0)
	{
		while (src[it] && it > dstsize - 1)
		{
			dst[it] = src[it];
			it++;
		}
		dst[it] = '\0';
	}
	while (src[it])
	{
		it++;
	}
	return (it);
}
