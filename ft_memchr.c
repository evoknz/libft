/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 08:16:57 by aperrien          #+#    #+#             */
/*   Updated: 2021/11/19 12:16:45 by aperrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
/*The memchr() function locates the first occurence of c 
(converted to an unsigned char) in string s
Returns a pointer to the byte located, or NULL if no such byte
exists within n bytes*/
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char) c)
			return (((unsigned char *)s) + i);
		i++;
	}
	return (NULL);
}
