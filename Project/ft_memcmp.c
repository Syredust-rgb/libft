/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiturral <aiturral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 10:11:52 by aiturral          #+#    #+#             */
/*   Updated: 2025/09/24 10:26:03 by aiturral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	memcmp(void *pointer1, void *pointer2, size_t size)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			it;

	ptr1 = (unsigned char *) pointer1;
	ptr2 = (unsigned char *) pointer2;
	it = 0;
	while (it < size)
	{
		if (ptr1[it] != ptr2[it])
			return (ptr1[it] - ptr2[it]);
		it++;
	}
	return (0);
}
