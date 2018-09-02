/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_float.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 18:07:37 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/02 19:57:03 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/io.h>
#include <ft/memory.h>
#include <ft/string.h>

int						get_float(const int fd, float *f, char *sep)
{
	char				*input;
	int					r;

	if ((r = ft_get_string(fd, &input, sep)) > 0)
		*f = ft_atof(input);
	else
		return (r);
	ft_strdel(&input);
	return (1);
}
