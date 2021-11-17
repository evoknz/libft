/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 10:11:49 by aperrien          #+#    #+#             */
/*   Updated: 2021/11/12 13:24:32 by aperrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Libere la memoire de l'element passe en argument en utilisant la fonction
 del puis avec free (3). La memoire de next ne doit pas etre free.
 Retourne none */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
	lst = 0;
}
