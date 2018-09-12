/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_find_fd_data.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 22:36:10 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/11 22:36:39 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/misc/get_string/fd_data.h>

t_list			*manage_find_fd_data(t_list *list, int fd)
{
	t_fd_data	*fd_data;

	fd_data = 0;
	while (list->next)
	{
		if (((t_fd_data*)(list->data))->fd == fd)
		{
			fd_data = (t_fd_data*)(list->data);
			break ;
		}
		list = list->next;
	}
	if (fd_data == 0)
	{
		list->next = ft_lstnew(&((t_fd_data){.fd = fd, .data = 0}),
				sizeof(t_fd_data));
		list = list->next;
	}
	return (list);
}
