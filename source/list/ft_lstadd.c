/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 20:58:21 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/09 20:59:59 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/list.h>

void		ft_lstadd(t_list **listp, t_list *el)
{
	t_list	*cur;

	if (*listp == 0)
	{
		*listp = el;
	}
	else
	{
		cur = *listp;
		while (cur->next)
			cur = cur->next;
		cur->next = el;
	}
}
