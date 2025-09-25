/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiturral <aiturral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 09:12:53 by aiturral          #+#    #+#             */
/*   Updated: 2025/09/25 13:22:13 by aiturral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *str, int chr)
{
	int	it;

	it = 0;
	while (str[it] != '\0' && str[it] != chr)
		it++;
	if (str[it] == (char)chr)
		return ((char *)&str[it]);
	return (NULL);
}
