/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_stack_element.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 15:53:40 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/08 19:39:20 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/stack.h>

#include <ft/memory.h>

t_stack_element				*ft_create_stack_element(void *data, size_t size)
{
	t_stack_element	*new_element;

	new_element = malloc(sizeof(t_stack_element));
	new_element->data = 0;
	new_element->size = 0;
	if (data && size)
	{
		new_element->data = malloc(sizeof(char) * size);
		new_element->size = size;
		ft_memncpy(new_element->data, data, size);
	}
	new_element->next = 0;
	new_element->prev = 0;
	return (new_element);
}
