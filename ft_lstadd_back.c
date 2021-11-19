/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 10:06:54 by aperrien          #+#    #+#             */
/*   Updated: 2021/11/19 12:24:14 by aperrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ajoute l'element 'new' a la fin de la liste. Retourne none
#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*i;

	if (!*alst)
	{
		*alst = new;
		return ;
	}
	i = ft_lstlast(*alst);
	i->next = new;
}
