/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiturral <aiturral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 10:59:30 by aiturral          #+#    #+#             */
/*   Updated: 2025/09/29 17:26:20 by aiturral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	it;

	if (!str1 || !str2 || !n)
		return (0);
	it = 0;
	while (it < n && str1[it] && str2[it] && str1[it] == str2[it])
		it++;
	if (it == n)
		return (0);
	return ((unsigned char)str1[it] - (unsigned char)str2[it]);
}
