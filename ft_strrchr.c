/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 08:49:09 by aperrien          #+#    #+#             */
/*   Updated: 2021/11/19 12:16:21 by aperrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
/*The strrchr function locates the last occurence of c 
(converted to a char) in the string pointed to by s. 
The terminating null character
is considered to be part of the string, therefore if c 
is \0, the functions locate the terminating \0
The function strrchr() return a pointer to the located character,
or NULL if the character does not appear in the string*/
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char) c)
			return (str + i);
		i--;
	}
	return (NULL);
}
/*int	main()
{
	char test [] = "Bonjour je m appelle arthur";
	int	bite = 'a';
	printf("%s",ft_strrchr(test, bite));
} */
