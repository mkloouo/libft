/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 13:11:12 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/04 05:15:18 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char					*ft_strcpy(char *dst, const char *src)
{
	dst = ft_memcpy(dst, src, ft_strlen(src) + 1);
	return (dst);
}
