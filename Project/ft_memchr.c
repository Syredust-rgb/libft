/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiturral <aiturral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 17:33:07 by aiturral          #+#    #+#             */
/*   Updated: 2025/09/29 16:37:20 by aiturral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	target;

	ptr = (unsigned char *)s;
	target = (unsigned char)c;
	if (!s || !n)
		return (NULL);
	while (n--)
	{
		if (*ptr == target)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
