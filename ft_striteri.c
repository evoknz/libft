/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 08:37:08 by aperrien          #+#    #+#             */
/*   Updated: 2021/11/19 12:21:38 by aperrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
/*Applique la fonction f a chaque caractere de la chaine de caracteres 
transmise comme argument, et en passant son index comme premier argument.
Chaque caractere est transmis par adresse a f pour etre modifie si necessaire
Retourne none.*/
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
