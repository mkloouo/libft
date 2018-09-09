/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelall.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 21:02:02 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/09 21:04:01 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/list.h>

void		ft_lstdelall(t_list **listp, t_element_deleter_f deleter)
{
	t_list	*el;

	while ((*listp)->next)
	{
		el = (*listp);
		(*listp) = (*listp)->next;
		ft_lstdel(el, deleter);
	}
	ft_lstdel((*listp), deleter);
}
