/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 15:52:03 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 18:56:43 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/string.h>

int						ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char		u1;
	unsigned char		u2;

	while (n--)
	{
		u1 = *s1++;
		u2 = *s2++;
		if (u1 != u2)
			return (u1 - u2);
		if (u1 == 0)
			return (0);
	}
	return (0);
}
