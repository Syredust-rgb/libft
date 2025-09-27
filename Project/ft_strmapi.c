/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiturral <aiturral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 09:03:24 by aiturral          #+#    #+#             */
/*   Updated: 2025/09/27 11:37:32 by aiturral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		new_str[it] = f(it, s[it]);
		it++;
	}
	new_str[it] = '\0';
	return (new_str);
}
