/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 17:15:46 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/08 19:29:36 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/stack.h>

#include <ft/memory.h>

void				ft_delete_stack(t_stack *stack,
					void (*data_deleter)(void*, size_t))
{
	t_stack_element	*element;
	t_stack_element	*cur;

	cur = stack->bottom;
	while (cur)
	{
		element = cur;
		cur = cur->next;
		ft_delete_stack_element(element, data_deleter);
		element = 0;
		if (cur == stack->bottom)
			break ;
	}
	free(stack);
}
