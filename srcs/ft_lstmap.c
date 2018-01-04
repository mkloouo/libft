/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 04:44:30 by modnosum          #+#    #+#             */
/*   Updated: 2017/12/01 05:09:25 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*mapped_lst;
	t_list	*cur;

	mapped_lst = NULL;
	if (lst && f)
	{
		mapped_lst = f(lst);
		cur = mapped_lst;
		while (lst->next)
		{
			lst = lst->next;
			if (!(cur->next = f(lst)))
			{
				free(cur->next);
				return (NULL);
			}
			cur = cur->next;
		}
	}
	return (mapped_lst);
}
