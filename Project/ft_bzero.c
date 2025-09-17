/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Syredust <Syredust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 20:04:17 by Syredust          #+#    #+#             */
/*   Updated: 2025/09/17 20:06:07 by Syredust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_bezero(void *s, size_t n)
{
	unsigned char	*pointer;

	pointer = (unsigned char *) s;
	while (n--)
	{
		*pointer++ = (unsigned char) '\0';
	}
	return (s);
}