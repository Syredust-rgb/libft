/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiturral <aiturral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 09:45:31 by aiturral          #+#    #+#             */
/*   Updated: 2025/09/27 11:40:23 by aiturral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	int		it;
	char	*last;

	if (!str || !chr)
		return (NULL);
	it = 0;
	last = NULL;
	while (str[it] != '\0')
	{
		if (str[it] == (char)chr)
			last = (char *)&str[it];
		it++;
	}
	if ((char)chr == '\0')
		return ((char *)&str[it]);
	return (last);
}
