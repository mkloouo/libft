/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 17:00:57 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/27 14:28:56 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
static int				get_system(const char *str)
{
	if (*str == '0' && (*(str + 1) == 'x' || *(str + 1) == 'X'))
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
	char				n;

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
	while ((ft_isdigit(*str) && (system == 8 || system == 10)) ||
			(ft_ishex(*str) && system == 16))
	{
		n = ft_tolower(*str);
		n = (n >= 'a') ? (n - 'a' + 10) : (n - '0');
		number = number * system + n;
		str++;
	}
	return (number * sign);
}
