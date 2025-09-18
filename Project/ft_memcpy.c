/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Syredust <Syredust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 08:15:07 by Syredust          #+#    #+#             */
/*   Updated: 2025/09/18 08:40:34 by Syredust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	unsigned char	*pointer_src;
	unsigned char	*pointer_dest;

	pointer_src = (unsigned char *) src;
	pointer_dest = (unsigned char *) dest;
	while (count--)
	{
		*pointer_dest++ = *pointer_src++;
	}
	return (dest);
}

/* int	main (void)
{
	char *string_src = "patata";
	char string_dest[8] = "aguacate";
	printf ("%s\n", string_src);
	ft_memcpy(string_dest, string_src, 6);
	printf ("%s\n", string_dest);
} */