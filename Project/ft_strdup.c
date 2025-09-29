/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiturral <aiturral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 11:48:14 by aiturral          #+#    #+#             */
/*   Updated: 2025/09/29 17:38:09 by aiturral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*copy;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	copy = malloc(len + 1);
	if (copy == NULL)
		return (NULL);
	ft_strlcpy (copy, s, len +1);
	return (copy);
}
