/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 20:44:49 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/07 16:16:44 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ft/io.h>

void    ft_putnstr_fd(const char *str, int fd, size_t n)
{
    if (str)
	{
        write(fd, str, n);
	}
}
