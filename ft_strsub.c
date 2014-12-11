/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoancea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 19:19:13 by hoancea           #+#    #+#             */
/*   Updated: 2014/11/09 18:18:35 by hoancea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*rez;

	i = 0;
	rez = (char*)malloc(len + 1);
	if (!rez)
		return (0);
	while (i < len)
	{
		rez[i] = s[start + i];
		i++;
	}
	rez[i] = 0;
	return (rez);
}
