/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiturral <aiturral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 09:12:53 by aiturral          #+#    #+#             */
/*   Updated: 2025/09/29 17:09:36 by aiturral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int chr)
{
	if (!str)
		return (NULL);
	while (*str)
	{
		if (*str == (char)chr)
			return ((char *)str);
		str++;
	}
	if (*str == (char)chr)
		return ((char *)str);
	return (NULL);
}
