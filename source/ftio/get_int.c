/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_int.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 18:04:21 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 18:43:25 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ftio.h>
#include <ftstdlib.h>
#include <ftstring.h>

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
