/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:45:21 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/04 05:55:20 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_io.h"
#include "ft_string.h"

void					ft_putstr_fd(const char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}
