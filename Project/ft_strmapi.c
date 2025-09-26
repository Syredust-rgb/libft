/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiturral <aiturral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 09:03:24 by aiturral          #+#    #+#             */
/*   Updated: 2025/09/26 09:46:27 by aiturral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"
#include <stdlib.h>

char	ft_f(unsigned int index, char c)
{
	if (index % 2 == 0)
		return ((char)ft_toupper((unsigned char)c));
	else
		return ((char)ft_tolower((unsigned char)c));
}

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char			*new_str;
	unsigned int	it;

	if (!s || !f)
		return (NULL);
	new_str = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new_str)
		return (NULL);
	it = 0;
	while (s[it])
	{
		new_str[it] = ft_f(it, s[it]);
		it++;
	}
	new_str[it] = '\0';
	return (new_str);
}
