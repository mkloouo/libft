/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 12:26:59 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/24 17:27:03 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

void					*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*temp;

	temp = (unsigned char*)ft_memalloc(len);
	if (temp)
	{
		temp = ft_memcpy(temp, src, len);
		dst = ft_memcpy(dst, temp, len);
		ft_memdel((void**)&temp);
	}
	return (dst);
}
