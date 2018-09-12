/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 18:04:21 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/09 21:13:12 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/io.h>

#include <ft/conv.h>
#include <ft/string.h>
#include <ft/memory.h>

int						ft_get_int(int fd, int *i, char const *sep)
{
	char				*input;
	int					r;

	if ((r = ft_get_string(fd, &input, sep)) > 0)
		*i = ft_atoi(input);
	else
		return (r);
	free(input);
	return (1);
}
