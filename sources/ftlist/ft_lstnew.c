/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 04:31:38 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 18:46:48 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ftlist.h>
#include <ftstdlib.h>

t_list					*ft_lstnew(const void *content, size_t content_size)
{
	t_list				*new;

	if ((new = (t_list*)ft_memalloc(sizeof(t_list))))
	{
		new->content = NULL;
		new->content_size = 0;
		if (content)
		{
			if (!(new->content = (void*)ft_memalloc(content_size)))
			{
				ft_memdel((void**)&new);
				return (NULL);
			}
			ft_memmove(new->content, content, content_size);
			new->content_size = content_size;
		}
		new->next = NULL;
	}
	return (new);
}
