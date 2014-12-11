/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoancea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 17:54:30 by hoancea           #+#    #+#             */
/*   Updated: 2014/11/07 17:55:21 by hoancea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*srez;
	unsigned int	i;

	i = 0;
	srez = (char*)malloc(ft_strlen(s) + 1);
	while (s[i])
	{
		srez[i] = (*f)(i, s[i]);
		i++;
	}
	srez[i] = 0;
	return (srez);
}
