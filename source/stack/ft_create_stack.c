/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 15:43:42 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/08 18:15:06 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/stack.h>

#include <ft/memory.h>

t_stack		*ft_create_stack(void)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	stack->top = 0;
	stack->bottom = 0;
	return (stack);
}
