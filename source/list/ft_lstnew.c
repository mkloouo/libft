/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 20:55:55 by modnosum          #+#    #+#             */
/*   Updated: 2018/10/17 05:10:13 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/list.h>

#include <ft/memory.h>

t_list		*ft_lstnew(void *data, size_t size)
{
	t_list	*l;

	l = malloc(sizeof(t_list));
	l->data = 0;
	l->size = 0;
	l->next = 0;
	if (data && size)
	{
		l->data = malloc(size);
		ft_memcpy(l->data, data, size);
		l->size = size;
	}
	return (l);
}
