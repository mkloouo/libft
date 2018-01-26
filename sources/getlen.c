/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 16:09:33 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/26 16:09:59 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

size_t					getlen(void *array, size_t size)
{
	unsigned char		*s;
	size_t				i;
	size_t				len;

	s = (unsigned char*)array;
	i = 0;
	len = 0;
	while (*(s + i))
	{
		i += size;
		len++;
	}
	return (len);
}
