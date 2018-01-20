/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 20:01:32 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/20 20:04:16 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
