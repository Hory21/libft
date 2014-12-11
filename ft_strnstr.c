/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoancea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 14:24:18 by hoancea           #+#    #+#             */
/*   Updated: 2014/11/07 14:41:23 by hoancea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	if (!(*to_find))
		return (str);
	while (str[i] && i < n)
	{
		j = 0;
		while (str[i] == to_find[j] && i < n)
		{
			i++;
			j++;
			if (!to_find[j])
				return (str + i - j);
		}
		if (str[i] != to_find[0] && str[i])
			i++;
	}
	return (0);
}
