/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 21:04:09 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/09 21:04:48 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/list.h>

size_t		ft_lstsize(t_list *list)
{
	size_t	size;

	size = 0;
	while (list)
	{
		++size;
		list = list->next;
	}
	return (size);
}
