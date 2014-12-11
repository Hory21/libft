/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoancea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 10:45:54 by hoancea           #+#    #+#             */
/*   Updated: 2014/11/13 11:05:47 by hoancea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*it;
	t_list	*rez;

	rez = (*f)(lst);
	lst = lst->next;
	it = rez;
	while (lst)
	{
		it->next = (*f)(lst);
		it = it->next;
		lst = lst->next;
	}
	return (rez);
}
