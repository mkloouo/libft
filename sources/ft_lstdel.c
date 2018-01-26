/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 04:37:23 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/24 20:16:55 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

void					ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list				*temp;

	if (alst && del)
	{
		if (*alst)
		{
			while (*alst)
			{
				del((*alst)->content, (*alst)->content_size);
				temp = (*alst)->next;
				ft_memdel((void**)alst);
				*alst = temp;
			}
		}
	}
}