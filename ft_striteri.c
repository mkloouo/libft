/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 15:45:09 by modnosum          #+#    #+#             */
/*   Updated: 2017/12/04 06:38:38 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_striteri(char *str, void (*f)(unsigned int, char*))
{
	int		i;

	i = 0;
	if (str && f)
	{
		while (str[i] != '\0')
		{
			f(i, (str + i));
			i++;
		}
	}
}
