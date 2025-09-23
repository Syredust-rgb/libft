/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiturral <aiturral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 10:59:30 by aiturral          #+#    #+#             */
/*   Updated: 2025/09/23 10:59:32 by aiturral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>

int	ft_strncmp(const char * str1, const char * str2, size_t n)
{
	size_t it;

	it = 0;
	while (i < n && s1[it] && s2[it] && s1[it] == s2[it])
		it++;
	if (it == n)
        return 0;
    return (unsigned char)s1[it] - (unsigned char)s2[it];
}

