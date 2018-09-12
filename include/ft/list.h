/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 20:19:01 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/09 21:34:59 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

# include <stddef.h>

typedef struct		s_list
{
	void			*data;
	size_t			size;
	struct s_list	*next;
}					t_list;

typedef void(*t_element_deleter_f)(void*, size_t);

t_list				*ft_lstnew(void *data, size_t size);
void				ft_lstadd(t_list **listp, t_list *el);
void				ft_lstdel(t_list *list, t_element_deleter_f deleter);
void				ft_lstdelall(t_list **listp, t_element_deleter_f deleter);

void				ft_lstdel_el(t_list **listp, t_list *to_del,
					t_element_deleter_f deleter);

size_t				ft_lstsize(t_list *list);

#endif
