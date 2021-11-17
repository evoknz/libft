/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 08:35:19 by aperrien          #+#    #+#             */
/*   Updated: 2021/11/17 11:26:48 by aperrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
/* The strdup function allocates sufficient memory for a copy of 
the string s1, does the copy, and returns a pointer to it. 
The pointer may subsequently be used as an argument to the function 
free(3). If insufficient memory is available, NULL is returned
and error is set to ENOMEM. The strdup() function copies at most n 
characters from the string s1 always MUL terminating the copied string.*/
{
	char	*str;
	int		i;

	if (s1 == NULL)
		return (0);
	str = (char *)malloc(sizeof(*s1) * (ft_strlen((char *)s1) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = 0;
	return (str);
}
