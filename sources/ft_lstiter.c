/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 04:42:13 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/27 14:28:36 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void					ft_lstiter(t_list *lst, void (*f)(t_list*))
{
	t_list				*next;

	if (f)
	{
		while (lst != NULL)
		{
			next = lst->next;
			f(lst);
			lst = next;
		}
	}
}
