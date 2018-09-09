/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_swap_top.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 16:37:28 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/08 18:46:56 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/stack.h>

void				ft_stack_swap_top(t_stack *stack)
{
	t_stack_element	*top;
	t_stack_element	*ptop;

	if (stack->top && stack->top->prev)
	{
		top = stack->top;
		ptop = top->prev;

		stack->top = ptop;
		stack->top->next = stack->bottom;

		top->next = ptop;
		top->prev = ptop->prev;

		stack->top->prev = top;
		stack->bottom->prev = stack->top;
	}
}
