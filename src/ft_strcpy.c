/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 13:11:12 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/16 06:25:12 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char					*ft_strcpy(char *dst, const char *src)
{
	dst = ft_memcpy(dst, src, ft_strlen(src) + 1);
	return (dst);
}
