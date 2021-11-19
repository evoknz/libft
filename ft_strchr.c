/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:56:04 by aperrien          #+#    #+#             */
/*   Updated: 2021/11/19 12:16:16 by aperrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
/* Strchr function locates the first occurence of c (converted to a char) 
in the string pointed to by s. The terminated null character is considered
to be part of the string, therefore if c is '\0', the functions locate 
the terminating '\0'
Returns a pointer to the located character, or NULL if the character
does not appear.*/
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s) + 1;
	while (i < len)
	{
		if ((unsigned char) s[i] == (unsigned char) c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
