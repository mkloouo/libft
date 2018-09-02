/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:49:50 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 18:49:14 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/memory.h>

void					ft_bzero(void *s, size_t n)
{
	unsigned char		*ptr;

	ptr = (unsigned char*)s;
	while (n)
	{
		*ptr++ = 0;
		n--;
	}
}
