/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 04:31:38 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/28 11:12:28 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list					*ft_lstnew(const void *content, size_t content_size)
{
	t_list				*item;

	if ((item = (t_list*)ft_memalloc(sizeof(t_list))))
	{
		item->content = NULL;
		item->content_size = ((content) ? (content_size) : (0));
		item->next = NULL;
		if (content)
		{
			if ((item->content = ft_memalloc(content_size)))
				ft_memmove(item->content, content, content_size);
			else
			{
				ft_memdel((void**)&item);
				return (NULL);
			}
		}
	}
	return (item);
}
