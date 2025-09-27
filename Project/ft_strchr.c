/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiturral <aiturral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 09:12:53 by aiturral          #+#    #+#             */
/*   Updated: 2025/09/27 11:02:51 by aiturral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int chr)
{
	int	it;

	if (!str || !chr)
		return (NULL);
	it = 0;
	while (str[it] != '\0' && str[it] != chr)
		it++;
	if (str[it] == (char)chr)
		return ((char *)&str[it]);
	return (NULL);
}
