/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 16:28:08 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/08 18:40:00 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/stack.h>

void	ft_rotate_stack(t_stack *stack)
{
	if (stack->bottom != 0 && stack->bottom != stack->top)
	{
		stack->top = stack->top->prev;
		stack->bottom = stack->top->next;
	}
}
