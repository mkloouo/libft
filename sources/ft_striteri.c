/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 15:45:09 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/24 17:24:31 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

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
