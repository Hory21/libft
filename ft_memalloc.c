/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoancea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 15:29:42 by hoancea           #+#    #+#             */
/*   Updated: 2014/11/09 15:12:57 by hoancea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_memalloc(size_t size)
{
	unsigned int	i;
	void			*mem;

	if (size == 0)
		return (0);
	i = 0;
	mem = malloc(size);
	if (mem != 0)
		while (i < size)
		{
			*((char*)mem + i) = 0;
			i++;
		}
	return (mem);
}
