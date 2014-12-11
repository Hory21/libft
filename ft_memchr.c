/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoancea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:59:03 by hoancea           #+#    #+#             */
/*   Updated: 2014/11/06 16:08:49 by hoancea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		if (*((char*)s + i) == (unsigned char)c)
			return ((char*)s + i);
		i++;
	}
	return (0);
}
