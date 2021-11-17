/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 08:38:38 by aperrien          #+#    #+#             */
/*   Updated: 2021/11/06 15:00:04 by aperrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
/*The strlcat function achieves the same goal as the venerable strcat
 function: to append one string onto the end of the other.
The problem with strcat however is that a size limitation isnt 
set for the destination buffer. its quite possible for this buffer to 
overflow. As a solutionm the strlcat function offers an additional
argument, dstsize. This argument sets the length of the destination 
string effectively equal to its buffer size.*/
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	j = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= ft_strlen(dst))
		return (ft_strlen(src) + size);
	i = ft_strlen(dst);
	while (src[j] != '\0' && j < (size - dst_len - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (src_len + dst_len);
}
