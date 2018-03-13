/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftlist.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 18:17:54 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 18:22:17 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTLIST_H
# define FTLIST_H

# include <stddef.h>

/*
** Single-linked list realization along with the useful functions.
*/

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

void					ft_lstiter(t_list *lst, void (*f)(t_list *));
t_list					*ft_lstmap(t_list *lst, t_list *(*f)(t_list *));

t_list					*ft_lstat(t_list *alst, unsigned int index);

#endif
