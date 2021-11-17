/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 08:39:20 by aperrien          #+#    #+#             */
/*   Updated: 2021/11/09 08:20:25 by aperrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
/*The strlcpy() and strlcat() functions copy and concatenate
strings with the same input parameters and output result as
snprintf(3).  They are designed to be safer, more consistent,
and less error prone replacements for the easily misused func-
tions strncpy(3) and strncat(3).*/
{
	size_t	i;

	i = ft_strlen(src);
	if (!dst || !src || !size)
		return (i);
	i = 0;
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}
