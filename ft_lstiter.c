/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:01:45 by aperrien          #+#    #+#             */
/*   Updated: 2021/11/19 12:24:45 by aperrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Itere sur la liste lst et applique la fontion f au contenu de chaque element.
 * retourne none.*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
