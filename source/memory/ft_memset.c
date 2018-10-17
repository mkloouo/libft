/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 04:46:25 by modnosum          #+#    #+#             */
/*   Updated: 2018/10/17 04:47:41 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/memory.h>

void				*ft_memset(void *ptr, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char*)ptr;
	while (n--)
		*p++ = (unsigned char)c;
	return (ptr);
}
