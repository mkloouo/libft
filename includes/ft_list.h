/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 03:46:57 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/04 05:36:44 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

/*
** Single-linked list realization along with the useful functions.
*/

/*
** string.h is for size_t import.
*/
# include <string.h>

typedef struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}						t_list;

t_list					*ft_lstnew(const void *content, size_t content_size);
void					ft_lstadd(t_list **alst, t_list *elem);

void					ft_lstrev(t_list **alst);
size_t					ft_lstsize(t_list *lst);

void					ft_lstdelone(t_list **alst, void (*del)(void *,
size_t));
void					ft_lstdel(t_list **alst, void (*del)(void *, size_t));

void					ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list					*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

#endif
