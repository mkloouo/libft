/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 15:54:05 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/08 18:34:14 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/stack.h>

void				ft_push_stack(t_stack *stack, t_stack_element *element)
{
	if (stack->bottom == 0)
	{
		stack->bottom = element;
		stack->top = element;
		element->next = element;
		element->prev = element;
	}
	else
	{
		stack->top->next = element;
		element->prev = stack->top;
		stack->top = element;
		stack->bottom->prev = element;
		element->next = stack->bottom;
	}
}
