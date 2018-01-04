/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 04:34:07 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/04 04:02:26 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (alst && del)
	{
		if (*alst)
		{
			del((*alst)->content, (*alst)->content_size);
			free(*alst);
			*alst = NULL;
		}
	}
}
