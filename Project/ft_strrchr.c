/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiturral <aiturral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 09:45:31 by aiturral          #+#    #+#             */
/*   Updated: 2025/09/22 09:59:39 by syredust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int chr)
{
	int		i;
	char	*last;

	i = 0;
	last = NULL;
	while (str[i] != '\0')
	{
		if (str[i] == (char)chr)
			last = (char *)&str[i];
		i++;
	}
	if ((char)chr == '\0')
		return ((char *)&str[i]);
	return (last);
}
