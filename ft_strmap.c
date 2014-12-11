/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoancea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 17:35:53 by hoancea           #+#    #+#             */
/*   Updated: 2014/11/07 17:41:59 by hoancea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*srez;
	unsigned int	i;

	i = 0;
	srez = (char*)malloc(ft_strlen(s) + 1);
	while (s[i])
	{
		srez[i] = (*f)(s[i]);
		i++;
	}
	srez[i] = 0;
	return (srez);
}
