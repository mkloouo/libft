/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 18:04:21 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/02 19:51:58 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/io.h>
#include <ft/memory.h>
#include <ft/string.h>

int						get_int(const int fd, int *i, char *sep)
{
	char				*input;
	int					r;

	if ((r = get_string(fd, &input, sep)) > 0)
		*i = ft_atoi(input);
	else
		return (r);
	ft_strdel(&input);
	return (1);
}
