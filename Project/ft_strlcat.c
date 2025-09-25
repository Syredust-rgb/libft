/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiturral <aiturral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 12:15:36 by aiturral          #+#    #+#             */
/*   Updated: 2025/09/25 12:16:08 by aiturral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dest, char const *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	it;

	dest_len = 0;
	while (dest_len < size && dest[dest_len])
		dest_len++;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (dest_len == size)
		return (size + src_len);
	it = 0;
	while ((dest_len + it + 1) < size && src[it])
	{
		dest[dest_len + it] = src[it];
		it++;
	}
	if (dest_len + it < size)
		dest[dest_len + it] = '\0';
	return (dest_len + src_len);
}
