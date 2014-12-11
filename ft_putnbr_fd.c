/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoancea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 13:35:24 by hoancea           #+#    #+#             */
/*   Updated: 2014/11/09 19:14:32 by hoancea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	int			v;
	long long	nn;

	nn = (long long)n;
	if (nn < 0)
	{
		nn *= -1;
		write(fd, "-", 1);
	}
	if (nn >= 10)
		ft_putnbr_fd(nn / 10, fd);
	v = nn % 10 + 48;
	write(fd, &v, 1);
}
