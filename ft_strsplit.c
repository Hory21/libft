/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoancea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 11:26:43 by hoancea           #+#    #+#             */
/*   Updated: 2014/11/12 13:28:44 by hoancea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		ft_getnrofstrings(char const *s, char sep)
{
	int	i;
	int	n;

	n = 0;
	i = 0;
	while (s[i] != 0)
	{
		if (s[i] != sep && (s[i + 1] == sep || s[i + 1] == 0))
			n++;
		i++;
	}
	return (n);
}

static char		*ft_makestr(char const *s, int *i, char sep)
{
	int		j;
	char	*rez;
	int		n;

	j = (*i);
	while (s[j] != sep && s[j] != 0)
	{
		j++;
		n++;
	}
	rez = (char*)malloc(n + 1);
	rez[n] = 0;
	j = 0;
	while (s[*i] != sep && s[*i] != 0)
	{
		rez[j] = s[*i];
		j++;
		(*i)++;
	}
	return (rez);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**rez;
	int		nrofstrings;

	nrofstrings = ft_getnrofstrings(s, c);
	rez = (char**)malloc(sizeof(char*) * (nrofstrings + 1));
	rez[nrofstrings] = 0;
	i = 0;
	j = 0;
	while (s[i] != 0)
	{
		if (s[i] == c)
			i++;
		else
		{
			rez[j] = ft_makestr(s, &i, c);
			j++;
		}
	}
	return (rez);
}
