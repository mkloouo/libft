/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 16:35:25 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/08 18:42:15 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/stack.h>

void	ft_rrotate_stack(t_stack *stack)
{
	if (stack->bottom != 0 && stack->bottom != stack->top)
	{
		stack->top = stack->bottom;
		stack->bottom = stack->top->next;
	}
}
