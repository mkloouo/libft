/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pop_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 16:18:05 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/09 15:50:58 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/stack.h>

t_stack_element		*ft_pop_stack(t_stack *stack)
{
	t_stack_element	*element;

	if (stack->bottom == 0)
		return (0);
	else if (stack->bottom == stack->top)
	{
		element = stack->bottom;
		stack->bottom = 0;
		stack->top = 0;
	}
	else
	{
		element = stack->top;
		stack->top = stack->top->prev;
		stack->top->next = stack->bottom;
		stack->bottom->prev = stack->top;
		element->next = 0;
		element->prev = 0;
	}
	--stack->size;
	return (element);
}
