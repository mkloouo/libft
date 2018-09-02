/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 04:34:07 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 18:46:25 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/list.h>
#include <ft/memory.h>

void					ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (alst && del)
	{
		if (*alst)
		{
			del((*alst)->content, (*alst)->content_size);
			ft_memdel((void**)alst);
			*alst = NULL;
		}
	}
}
