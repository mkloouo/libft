/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 00:06:39 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 04:23:38 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int						ft_strcc(char *str, char c)
{
	int					count;

	count = 0;
	while ((str = ft_strchr(str, c)))
	{
		count++;
		str++;
	}
	return (count);
}
