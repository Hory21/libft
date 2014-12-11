/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoancea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 15:13:35 by hoancea           #+#    #+#             */
/*   Updated: 2014/11/12 16:22:31 by hoancea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*rez;

	rez = (t_list*)malloc(sizeof(t_list));
	if (rez == 0)
		return (0);
	if (content == 0)
	{
		rez->content = 0;
		rez->content_size = 0;
	}
	else
	{
		rez->content = malloc(content_size);
		if (rez->content == 0)
			return (0);
		ft_memcpy(rez->content, content, content_size);
		rez->content_size = content_size;
	}
	rez->next = 0;
	return (rez);
}
