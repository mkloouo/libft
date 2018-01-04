/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 17:48:17 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/04 05:17:28 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char					*ft_strnew(size_t size)
{
	char				*str;

	str = (char*)ft_memalloc(size + 1);
	return (str);
}
