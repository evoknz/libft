/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 07:58:24 by aperrien          #+#    #+#             */
/*   Updated: 2021/11/17 10:56:02 by aperrien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <limits.h>
/*La fonction atoi() convertit le debut de la chaine pointee 
 * par nptr en entier de type int.
Le resultat est identique a un appel.
La valeur renvoyee est le resultat de la conversion. */

int	ft_atoi(const char *str)
{
	int	negative;
	int	result;
	int	i;

	i = 0;
	negative = 1;
	result = 0;
	if (ft_strncmp(str, "-2147483648", 11) == 0)
		return (INT_MIN);
	else if (ft_strncmp(str, "2147483647", 10) == 0)
		return (INT_MAX);
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '-')
		negative = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10;
		result = result + (str[i] - 48);
		i++;
	}
	return (result * negative);
}

/*#include <stdio.h>

int	main()
{
	printf("%d",ft_atoi("-2147483649"));
}*/
