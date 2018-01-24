/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:51:40 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/24 17:26:59 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

void					*ft_memset(void *b, int c, size_t len)
{
	unsigned char		*ptr;

	ptr = (unsigned char*)b;
	while (len)
	{
		*ptr++ = (unsigned char)c;
		len--;
	}
	return (b);
}
