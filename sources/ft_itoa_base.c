/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/26 05:43:51 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/24 20:16:40 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

static int				count_length(int value, int base, int *move)
{
	int					length;

	length = (base == 10 && value < 0) ? 1 : 0;
	*move = (base == 10 && value < 0) ? 1 : 0;
	while (value)
	{
		length++;
		value /= base;
	}
	return (length);
}

char					*ft_itoa_base(int value, int base)
{
	char				*ascii;
	int					length;
	int					digit;
	int					move;
	int					i;

	length = count_length(value, base, &move);
	if (!(ascii = (char*)ft_strnew(sizeof(char) * length)))
		return (NULL);
	i = 0;
	if (move)
		ascii[i++] = '-';
	while (i < length)
	{
		digit = (value % base) < 0 ? -(value % base) : (value % base);
		ascii[length - i++ - ((move) ? (0) : (1))] = (digit > 9)
			? ('A' + digit)
			: ('0' + digit);
		value /= base;
	}
	ascii[i] = 0;
	return (ascii);
}
