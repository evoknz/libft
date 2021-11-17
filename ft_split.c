/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 09:28:28 by aperrien          #+#    #+#             */
/*   Updated: 2021/11/10 11:00:07 by aperrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*Alloue (avec malloc(3)) et retourne un tableau de chaines de 
caracteres obtenu en separant 's' a l'aide du caractere 'c' utilise comme
delimiteur. Le tableau doit etre termine par NULL.
Retourne le tableau de nouvelles chaines de caracteres, 
resultant du decoupage. NULL si l'allocation echoue.*/
#include <stdio.h>

size_t	count_words(const char *str, char c)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	if (str[0] == '\0')
		return (0);
	if (str[0] != c)
		count = 1;
	while (str[i])
	{
		if (str[i] == c && (str[i + 1] != c && str[i + 1] != '\0'))
			count++;
		i++;
	}
	return (count);
}

size_t	count_size(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

char	**ft_split(const char *str, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!str)
		return (NULL);
	i = -1;
	j = 0;
	k = 0;
	tab = malloc(sizeof(char *) * (count_words((char *)str, c) + 1));
	if (!tab)
		return (NULL);
	while (++i < count_words((char *)str, c))
	{
		tab[i] = malloc(sizeof(char) * count_size(((str + j + 1)), c) + 1);
		k = 0;
		while (str[j] && str[j] == c)
			j++;
		while (str[j] && str[j] != c)
			tab[i][k++] = str[j++];
		tab[i][k] = 0;
	}
	tab[i] = 0;
	return (tab);
}
/*int	main()
{
	char **tab;
	const char *str = "  coucou   lolllll  salut  ";
	tab = ft_split(str, ' ');
	
	int i;
	i = 0;
	while(i < 4)
	{
		printf("%s\n", tab[i]);
		i++;
	}
}*/
