/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 12:38:57 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/16 06:25:12 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void					*ft_memalloc(size_t size)
{
	unsigned char		*ptr;
	size_t				i;

	ptr = (unsigned char*)malloc(size);
	if (ptr)
	{
		i = 0;
		while (i < size)
			ptr[i++] = 0;
	}
	return (ptr);
}
