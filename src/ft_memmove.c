/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 12:26:59 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/16 06:25:22 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*temp;

	temp = (unsigned char*)ft_memalloc(len);
	if (temp)
	{
		temp = ft_memcpy(temp, src, len);
		dst = ft_memcpy(dst, temp, len);
	}
	return (dst);
}
