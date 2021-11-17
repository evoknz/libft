/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 10:31:32 by aperrien          #+#    #+#             */
/*   Updated: 2021/11/11 12:00:32 by aperrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Supprime et libere la memoire de l'element passe en parametre, et de tous
 * les elements qui suivent, a l'aie de del et de free. Enfin le pointeur
 * initial doit etre mis a NULL. Retourne none.*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*i;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		i = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = i;
	}
}
