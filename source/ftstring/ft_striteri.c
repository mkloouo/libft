/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 15:45:09 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 18:56:49 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ftstring.h>

void					ft_striteri(char *str, void (*f)(unsigned int, char*))
{
	int					i;

	i = 0;
	if (str && f)
		while (str[i])
		{
			f(i, (str + i));
			i++;
		}
}
