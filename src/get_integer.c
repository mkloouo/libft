/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_integer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 15:11:12 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/16 15:16:41 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int						get_integer(char *prompt)
{
	char				*data;

	ft_putstr(prompt);
	data = NULL;
	get_next_line(0, &data);
	return (ft_atoi(data));
}
