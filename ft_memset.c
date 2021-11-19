/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 08:39:10 by aperrien          #+#    #+#             */
/*   Updated: 2021/11/19 12:15:35 by aperrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
/* La fonction memset() remplit les 3 (len (length) premiers 
octets de la zone mémoire pointée par b avec l'octet c.*/
{
	size_t			i;
	unsigned char	*dest;

	if (!b && !c)
		return (NULL);
	i = 0;
	dest = (unsigned char *)b;
	while (i < len)
	{
		dest[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
