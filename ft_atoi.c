/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoancea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 14:05:03 by hoancea           #+#    #+#             */
/*   Updated: 2014/11/09 15:26:06 by hoancea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		number;
	int		it;
	int		sign;

	it = 0;
	number = 0;
	sign = 0;
	while (str[it] == '\t' || str[it] == ' ' || str[it] == '\n' ||
			str[it] == '\r' || str[it] == '\v' || str[it] == '\f')
		it++;
	if (*(str + it) == '-')
	{
		sign = 1;
		it++;
	}
	if (*(str + it) == '+')
		it++;
	while ((*(str + it) >= '0' && *(str + it) <= '9'))
	{
		number = number * 10 + (int)(*(str + it) - '0');
		it++;
	}
	if (sign == 1)
		number *= -1;
	return (number);
}
