/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoancea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 12:08:23 by hoancea           #+#    #+#             */
/*   Updated: 2014/11/05 12:20:11 by hoancea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(char *s1)
{
	char	*s2;
	int		i;

	i = 0;
	s2 = (char *)malloc(ft_strlen(s1) + 1);
	while ((*(s1 + i)) != 0)
	{
		(*(s2 + i)) = (*(s1 + i));
		i++;
	}
	(*(s2 + i)) = (*(s1 + i));
	return (s2);
}
