/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 14:02:30 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 18:56:46 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/string.h>

size_t					ft_strlen(const char *str)
{
	size_t				len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
