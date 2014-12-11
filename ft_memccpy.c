/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoancea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:19:11 by hoancea           #+#    #+#             */
/*   Updated: 2014/11/06 15:25:51 by hoancea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		*((char*)dst + i) = (*((char*)src + i));
		if (*((char*)src + i) == (unsigned char)c)
		{
			return (dst + i + 1);
		}
		i++;
	}
	return (0);
}
