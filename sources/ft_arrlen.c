/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 13:12:02 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/13 13:24:47 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t					ft_arrlen(void *arr, size_t element_size)
{
	unsigned char		*s;
	size_t				i;
	size_t				len;

	s = (unsigned char*)arr;
	i = 0;
	len = 0;
	while (*(s + i))
	{
		i += element_size;
		len++;
	}
	return (len);
}
