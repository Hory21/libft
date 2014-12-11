/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoancea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/12 13:38:37 by hoancea           #+#    #+#             */
/*   Updated: 2014/11/07 14:39:34 by hoancea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	if (!(*to_find))
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i] == to_find[j])
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
