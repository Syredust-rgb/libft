/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiturral <aiturral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 12:13:45 by aiturral          #+#    #+#             */
/*   Updated: 2025/09/27 10:57:49 by aiturral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void static	memmove_forward(unsigned char *d, const unsigned char *s, size_t n)
{
	size_t	it;

	it = 0;
	while (it < n)
	{
		d[it] = s[it];
		it++;
	}
}

void static	memmove_backward(unsigned char *d, const unsigned char *s, size_t n)
{
	size_t	it;

	it = n;
	while (it > 0)
	{
		d[it - 1] = s[it - 1];
		it--;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dest || !src || !n)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d == s || n == 0)
		return (dest);
	if (d < s)
		memmove_forward(d, s, n);
	else
		memmove_backward(d, s, n);
	return (dest);
}
