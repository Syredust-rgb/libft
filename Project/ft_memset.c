/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiturral <aiturral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 17:17:25 by aiturral          #+#    #+#             */
/*   Updated: 2025/09/27 10:58:19 by aiturral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*pointer;

	if (!s || !c || !n)
		return (NULL);
	pointer = (unsigned char *) s;
	while (n--)
	{
		*pointer++ = (unsigned char) c;
	}
	return (s);
}
