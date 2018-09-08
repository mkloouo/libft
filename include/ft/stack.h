/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 15:38:04 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/08 18:49:16 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include <stddef.h>

typedef struct				s_stack_element
{
	void					*data;
	size_t					size;
	struct s_stack_element	*next;
	struct s_stack_element	*prev;
}							t_stack_element;

typedef struct				s_stack
{
	t_stack_element			*top;
	t_stack_element			*bottom;
}							t_stack;

t_stack						*ft_create_stack(void);
void						ft_delete_stack(t_stack *stack,
							void (*data_deleter)(void*, size_t));

t_stack_element				*ft_create_stack_element(void *data, size_t size);
void						ft_delete_stack_element(t_stack_element *element,
							void (*data_deleter)(void*, size_t));

void						ft_push_stack(t_stack *stack,
							t_stack_element *element);
t_stack_element				*ft_pop_stack(t_stack *stack);

void						ft_rotate_stack(t_stack *stack);
void						ft_rrotate_stack(t_stack *stack);

void						ft_swap_top(t_stack *stack);

#endif
