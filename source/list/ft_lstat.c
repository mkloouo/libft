/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 20:01:32 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 18:45:54 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/list.h>

t_list					*ft_lstat(t_list *alst, unsigned int index)
{
	unsigned int		i;
	t_list				*el;

	el = NULL;
	if (alst)
	{
		i = 0;
		el = alst;
		while (i < index)
		{
			el = el->next;
			if (!el)
				return (NULL);
			i++;
		}
	}
	return (el);
}
