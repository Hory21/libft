/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoancea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 13:27:51 by hoancea           #+#    #+#             */
/*   Updated: 2014/11/09 19:13:19 by hoancea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	char		v;
	long long	nn;

	nn = (long long)n;
	if (nn < 0)
	{
		nn *= -1;
		write(1, "-", 1);
	}
	if (nn >= 10)
		ft_putnbr(nn / 10);
	v = nn % 10 + 48;
	write(1, &v, 1);
}
