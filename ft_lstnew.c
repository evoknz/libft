/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:26:23 by aperrien          #+#    #+#             */
/*   Updated: 2021/11/12 13:12:12 by aperrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Alloue avec malloc et renvoie un nouvel element. La variable content est 
 * initialisee a l'aide de la valeur du parametre content. La variable
 * 'next' est initialisee a NULL*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*#include <stdio.h>

int	main(void)
{
	t_list	*p;

	p = ft_lstnew((void *)"Avfs");
	printf("%d", (int)p->content);
}*/
