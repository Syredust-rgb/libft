/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiturral <aiturral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 11:54:04 by aiturral          #+#    #+#             */
/*   Updated: 2025/09/27 11:37:06 by aiturral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	it;

	if (!dst || !src || !dstsize)
		return (0);
	it = 0;
	if (dstsize != 0)
	{
		while (src[it] && it < dstsize - 1)
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
