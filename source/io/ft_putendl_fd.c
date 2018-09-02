/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:47:32 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 18:39:40 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/io.h>

void					ft_putendl_fd(const char *s, int fd)
{
	if (s)
		ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
