/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiturral <aiturral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 08:28:10 by aiturral          #+#    #+#             */
/*   Updated: 2025/09/27 10:56:00 by aiturral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int static	ft_num_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

void static	ft_handle_negative(long *nbr, char *str)
{
	if (*nbr < 0)
	{
		str[0] = '-';
		*nbr = -(*nbr);
	}
}

void static	ft_convert_number(long nbr, char *str, int len)
{
	if (nbr == 0)
		str[0] = '0';
	while (nbr > 0)
	{
		str[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	int		len;

	if (!n)
		return (NULL);
	nbr = n;
	len = ft_num_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	ft_handle_negative(&nbr, str);
	ft_convert_number(nbr, str, len);
	return (str);
}
