/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoancea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 17:05:15 by hoancea           #+#    #+#             */
/*   Updated: 2014/11/12 17:10:37 by hoancea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*prv;

	while (*alst)
	{
		prv = (*alst);
		(*alst) = (*alst)->next;
		ft_lstdelone(&prv, del);
	}
}
