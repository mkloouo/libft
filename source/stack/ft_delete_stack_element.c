/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_stack_element.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 17:17:49 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/08 19:29:39 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/stack.h>

#include <ft/memory.h>

void	ft_delete_stack_element(t_stack_element *element,
		void (*data_deleter)(void*, size_t))
{
	if (element)
	{
		if (element->data)
		{
			data_deleter(element->data, element->size);
			element->data = 0;
		}
		element->next = 0;
		element->prev = 0;
		free(element);
	}
}
