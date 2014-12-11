/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoancea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:29:26 by hoancea           #+#    #+#             */
/*   Updated: 2014/11/16 16:11:06 by hoancea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*dp;
	char const	*sp;

	dp = dst;
	sp = src;
	if (dp < sp)
	{
		while (n-- > 0)
			*dp++ = *sp++;
	}
	else
	{
		dp += n;
		sp += n;
		while (n-- > 0)
			*--dp = *--sp;
	}
	return (dst);
}
