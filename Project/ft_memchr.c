/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiturral <aiturral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 17:33:07 by aiturral          #+#    #+#             */
/*   Updated: 2025/09/23 17:52:28 by aiturral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"
#include <stddef.h>

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	target;
	size_t			it;

	ptr = (unsigned char *)s;
	target = (unsigned char)c;
	it = 0;
	while (it < n)
	{
		if (ptr[it] == target)
			return ((void *)(ptr + it));
		it++;
	}
	return (NULL);
}
