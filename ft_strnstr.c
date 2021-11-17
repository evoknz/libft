/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 08:47:53 by aperrien          #+#    #+#             */
/*   Updated: 2021/11/09 08:12:31 by aperrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
/*The strnstr() function locates the first occurence of the null
terminated string needle in the string haystack, where not more
than len characters are searched. characters that appear after a \0 
character are not searched. Since the strnstr() function is a FreeBSD specific API, it 
should only be used when portability is not a concern. If needle is an empty string, haystack
is returned, if needle occurs nowhere in haystack, NULL is returned. Otherwise a pointer
to the first character of the first occurence of needle is returned.*/
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle[i])
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while (needle[j] == haystack[i + j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
