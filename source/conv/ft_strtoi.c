/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 15:14:10 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/08 15:26:54 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/conv.h>

#include <limits.h>
#include <ft/char.h>

int			ft_strtoi(char const *str, char *err)
{
	long	result;

	result = ft_strtoli(str);
	*err = (result > INT_MAX || result < INT_MIN);
	return ((int)result);
}
