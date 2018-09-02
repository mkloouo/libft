/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 04:37:23 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 18:46:15 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/list.h>
#include <ft/memory.h>

void					ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list				*cur;

	if (alst && del && *alst)
	{
		while (*alst)
		{
			del((*alst)->content, (*alst)->content_size);
			cur = (*alst)->next;
			ft_memdel((void**)alst);
			*alst = cur;
		}
	}
}
