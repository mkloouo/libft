/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 17:00:57 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/24 20:16:16 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

static int				get_system(const char *str)
{
	if (*str == '0' && *(str + 1) == 'x')
		return (16);
	if (*str == '0')
		return (8);
	else
		return (10);
}

int						ft_atoi(const char *str)
{
	int					number;
	int					system;
	char				sign;
	char				c;

	sign = 1;
	while (ft_isspace(*str))
		str++;
	system = get_system(str);
	if (!(number = 0) && (system == 16 || system == 8))
		str += (system == 16) ? (2) : (1);
	else if ((*str == '-' || *str == '+'))
	{
		sign = (*str == '-') ? -1 : 1;
		str++;
	}
	while ((ft_isdigit(*str) && (system >= 2 && system <= 15)) ||
			(ft_ishex(*str) && system == 16))
	{
		c = ft_tolower(*str);
		number = number * system + (c - ((c >= 'a') ? ('a') : ('0')));
		str++;
	}
	return (number);
}