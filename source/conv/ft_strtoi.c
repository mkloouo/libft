/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 15:14:10 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/08 20:09:20 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/conv.h>

#include <ft/char.h>

int			ft_strtoi(char const *str)
{
	long	result;

	result = ft_strtoli(str);
	return ((int)result);
}
