/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 00:37:20 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/04 05:42:40 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

static int				number_len(int n)
{
	int					len;

	len = 1;
	while (n /= 10)
		len++;
	return (len);
}

char					*ft_itoa(int n)
{
	char				*str;
	int					sign;
	int					len;

	sign = n;
	len = number_len(n);
	str = ft_strnew((n < 0) ? (len + 1) : (len));
	if (str)
	{
		len = 0;
		if (n == 0)
			str[len] = '0';
		while (n)
		{
			str[len++] = ((n < 0 ? -(n % 10) : (n % 10))) + '0';
			n /= 10;
		}
		if (sign < 0)
			str[len] = '-';
	}
	return (ft_strrev(str));
}
