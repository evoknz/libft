/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 08:56:27 by aperrien          #+#    #+#             */
/*   Updated: 2021/11/11 10:11:30 by aperrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Renvoie le dernier element de la liste et retourne celui ci.
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
