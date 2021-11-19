/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 08:33:29 by aperrien          #+#    #+#             */
/*   Updated: 2021/11/19 12:22:02 by aperrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
/*Ecrit la chaine de racteres 's' sur le file descriptor donne.
Retourne none*/
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
