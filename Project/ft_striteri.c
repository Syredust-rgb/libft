/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiturral <aiturral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 09:17:32 by aiturral          #+#    #+#             */
/*   Updated: 2025/09/26 09:39:49 by aiturral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	f(unsigned int it, char *c)
{
	if (it % 2 == 0 && *c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

void	ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	unsigned int	it;

	if (s && f)
	{
		it = 0;
		while (s[it] != '\0')
		{
			f(it, &s[it]);
			it++;
		}
	}
}
