/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiturral <aiturral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 12:13:00 by aiturral          #+#    #+#             */
/*   Updated: 2025/09/27 10:57:08 by aiturral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	unsigned char	*pointer_src;
	unsigned char	*pointer_dest;

	if (!dest || !src || !count)
		return (NULL);
	pointer_src = (unsigned char *) src;
	pointer_dest = (unsigned char *) dest;
	while (count--)
	{
		*pointer_dest++ = *pointer_src++;
	}
	return (dest);
}
