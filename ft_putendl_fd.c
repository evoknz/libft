/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 08:28:53 by aperrien          #+#    #+#             */
/*   Updated: 2021/11/19 12:22:21 by aperrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
/*Ecrit la chaine de caracteres 's' sur le file 
descriptor donnem suivi d'un retour a la ligne.
Retourne none*/
{
	char	endl;

	if (!s)
		return ;
	endl = '\n';
	write(fd, s, ft_strlen(s));
	write(fd, &endl, 1);
}
