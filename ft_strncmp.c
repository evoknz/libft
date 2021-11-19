/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 08:46:26 by aperrien          #+#    #+#             */
/*   Updated: 2021/11/19 12:16:29 by aperrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* The strncmp() function lexicographically compare
  the null-terminated strings s1 and s2. It compares
  not more than n characters. Because it is designed for
  comparing strings rather than binary data,
  characters that appear after a '\0' character 
  are not compared
  Returns an integer greater than, equal to, or less than 0
  accordng to the string s1 is greater than, equal to, or
  less than the string s2.  The comparison is done
  using unsigned characters, so that '\200' is greater
  than '\0'.*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	src;
	unsigned char	dst;

	i = 0;
	if (!n)
		return (n);
	src = (unsigned char)s1[i];
	dst = (unsigned char)s2[i];
	while ((src && dst) && (i < n))
	{
		src = (unsigned char)s1[i];
		dst = (unsigned char)s2[i];
		if (src != dst)
			return (src - dst);
		i++;
	}
	return (src - dst);
}
