/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_string.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 13:47:07 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/24 17:04:02 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

char					*get_string(char *prompt)
{
	char	*data;

	ft_putstr(prompt);
	data = NULL;
	return (get_next_line(0, &data) > 0 ? data : "");
}
