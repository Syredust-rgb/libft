/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root </var/mail/root>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 10:43:46 by root              #+#    #+#             */
/*   Updated: 2025/09/25 11:38:30 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t num, size_t size)
{
	size_t			total_size;
	size_t			it;
	unsigned char	*ptr;

	if (size != 0 && num > SIZE_MAX / size)
		return (NULL);
	total_size = num * size;
	ptr = (unsigned char *)malloc (total_size);
	if (ptr != NULL)
	{
		it = 0;
		while (it < total_size)
		{
			ptr[it] = 0;
			it++;
		}
	}
	return ((void *)ptr);
}
