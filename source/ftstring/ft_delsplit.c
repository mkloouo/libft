/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 19:18:45 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 18:57:12 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ftstring.h>
#include <ftstdlib.h>

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
			ft_strdel(t2);
		}
		ft_memdel((void**)split);
	}
}
