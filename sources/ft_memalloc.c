/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 12:38:57 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/27 14:28:31 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

void					*ft_memalloc(size_t size)
{
	unsigned char		*ptr;

	if ((ptr = (unsigned char*)malloc(size)))
		ft_bzero(ptr, size);
	return (ptr);
}
