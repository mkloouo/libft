/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_el.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 21:35:17 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/09 21:40:10 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/list.h>

void				ft_lstdel_el(t_list **listp, t_list *to_del,
					t_element_deleter_f deleter)
{
	t_list			*save;
	t_list			*prev;

	save = *listp;
	prev = 0;
	while ((*listp)->next)
	{
		if ((*listp) == to_del)
		{
			if (prev)
				prev->next = (*listp)->next;
			else if ((*listp) == save)
				save = (*listp)->next;
			ft_lstdel(to_del, deleter);
			(*listp) = 0;
			break ;
		}
		prev = (*listp);
		(*listp) = (*listp)->next;
	}
	*listp = save;
}
