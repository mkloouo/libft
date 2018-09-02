/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 17:48:17 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/02 20:22:30 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/string.h>
#include <ft/memory.h>

char					*ft_strnew(size_t size)
{
	char				*str;

	str = (char*)malloc(size + 1);
	return (str);
}
