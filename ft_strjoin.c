/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoancea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 19:32:21 by hoancea           #+#    #+#             */
/*   Updated: 2014/11/07 19:54:01 by hoancea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	char			*rez;

	i = 0;
	rez = (char*)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	while (s1[i])
	{
		rez[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		rez[i + j] = s2[j];
		j++;
	}
	rez[i + j] = 0;
	return (rez);
}
