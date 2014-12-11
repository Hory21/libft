/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoancea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 09:27:45 by hoancea           #+#    #+#             */
/*   Updated: 2014/11/12 09:59:02 by hoancea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*d;
	const char	*s;
	size_t		siz;
	size_t		dlen;

	d = dst;
	s = src;
	siz = size;
	while (siz-- != 0 && *d != 0)
		d++;
	dlen = d - dst;
	siz = size - dlen;
	if (siz == 0)
		return (dlen + ft_strlen(s));
	while (*s != 0)
	{
		if (siz != 1)
		{
			*d++ = *s;
			siz--;
		}
		s++;
	}
	*d = 0;
	return (dlen + s - src);
}
