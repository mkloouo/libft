/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 21:00:45 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/09 21:01:54 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/list.h>

#include <ft/memory.h>

void	ft_lstdel(t_list *list, t_element_deleter_f deleter)
{
	if (list)
	{
		if (list->data)
		{
			deleter(list->data, list->size);
			list->data = 0;
		}
		list->next = 0;
		free(list);
	}
}
