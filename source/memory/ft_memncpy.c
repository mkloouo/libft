/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 15:49:48 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/08 15:50:43 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/memory.h>

void		*ft_memncpy(void *dst, void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char*)dst;
	s = (char*)src;
	while (n)
	{
		*d++ = *s++;
		--n;
	}
	return (dst);
}
