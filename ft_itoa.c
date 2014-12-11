/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoancea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 10:05:28 by hoancea           #+#    #+#             */
/*   Updated: 2014/11/12 10:50:29 by hoancea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_getintlen(int x)
{
	long long	n;
	int			len;

	len = 0;
	n = (long long)x;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	long long	nn;
	int			i;
	char		*rez;

	nn = (long long)n;
	if (nn < 0)
		nn *= -1;
	rez = malloc(ft_getintlen(n) + 1);
	rez[0] = 48;
	i = ft_getintlen(n) - 1;
	rez[i + 1] = 0;
	while (nn != 0)
	{
		rez[i] = nn % 10 + 48;
		nn /= 10;
		i--;
	}
	if (n < 0)
		rez[0] = '-';
	return (rez);
}
