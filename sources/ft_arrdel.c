/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 13:11:42 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/13 13:11:43 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void					ft_arrdel(void **ap, size_t element_size)
{
	unsigned char		*s;
	size_t				i;

	s = *((unsigned char**)ap);
	i = 0;
	while (s[i])
	{
		ft_memdel((void**)(s + i));
		i += element_size;
	}
	ft_memdel(ap);
}
