/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 16:51:52 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 18:56:54 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/string.h>

int						ft_strcmp(const char *s1, const char *s2)
{
	unsigned char		*ptr1;
	unsigned char		*ptr2;
	size_t				i;

	i = 0;
	ptr1 = (unsigned char*)s1;
	ptr2 = (unsigned char*)s2;
	while (ptr1[i] == ptr2[i] && ptr1[i])
		i++;
	return (ptr1[i] - ptr2[i]);
}
