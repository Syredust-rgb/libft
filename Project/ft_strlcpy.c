/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiturral <aiturral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 11:54:04 by aiturral          #+#    #+#             */
/*   Updated: 2025/09/29 17:21:41 by aiturral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	it;

	if (dstsize == 0)
		return (ft_strlen(src));
	it = 0;
	while (it < dstsize -1 && src[it] != '\0')
	{
		dst[it] = src[it];
		it++;
	}
	dst[it] = '\0';
	return (ft_strlen(src));
}
