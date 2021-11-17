/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:29:49 by aperrien          #+#    #+#             */
/*   Updated: 2021/11/17 13:05:42 by aperrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Itere sur la liste lst et applique la fonction f au contenu de
 * chaque element.
 * Cree une nouvelle liste resultant des applications successives de f.
 * La fonction del est la pour detruire le contenu d'un element
 * si necessaire.
 * Retourne la nouvelle liste. NULL si l'allocation echoue*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlink;
	t_list	*newlist;

	newlist = NULL;
	while (lst)
	{
		newlink = ft_lstnew(f(lst->content));
		if (!newlink)
		{
			del(newlist->content);
			return (NULL);
		}
		ft_lstadd_back(&newlist, newlink);
		lst = lst->next;
	}
	return (newlist);
}
