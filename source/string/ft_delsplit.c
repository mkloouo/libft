/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 19:18:45 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/07 17:03:22 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/string.h>
#include <ft/memory.h>

void					ft_delsplit(char ***split)
{
	char				**t1;
	char				**t2;

	if (split && *split)
	{
		t1 = *split;
		while (*t1)
		{
			t2 = t1;
			t1++;
			free(*t2);
		}
		free(*split);
	}
}
