/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 20:44:49 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/02 20:45:25 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ft/io.h>

void    ft_putnstr(const char *str)
{
    if (str)
        ft_putnstr_fd(str, STDOUT_FILENO);
}
