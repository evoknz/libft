/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 08:12:45 by aperrien          #+#    #+#             */
/*   Updated: 2021/11/19 12:15:13 by aperrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
/*The malloc() calloc () valloc () realloc() reallocf() functions allocate memory. 
The allocated memory is aligned such that it can be 
used for any date type, including AltiVec- and SSE- related types. The free() 
function frees allocations that were 
created via the preceding allocation functions
The malloc() function allocates size bytes of memory and returns 
a pointer to the allocated memory.
If successful, the functions return a pointer to allocated memory, If there
 is an error, they return a NULL pointer and set errno to ENOMEM.*/
{
	char	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
