/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoancea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 09:43:59 by hoancea           #+#    #+#             */
/*   Updated: 2014/11/09 11:53:20 by hoancea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(const char *s)
{
	char			*srez;
	char			*si;
	char			*srezi;
	char			*st;

	si = (char*)s;
	while (*si == ' ' || *si == '\n' || *si == '\t')
		si++;
	st = (char*)s + ft_strlen(s) - 1;
	while ((*st == ' ' || *st == '\n' || *st == '\t') && (st != s))
		st--;
	if (st == s)
		return (ft_memalloc(1));
	srez = (char*)malloc(st - si + 1);
	srezi = srez;
	while (si <= st)
	{
		*srezi = (*si);
		si++;
		srezi++;
	}
	*srezi = 0;
	return (srez);
}
