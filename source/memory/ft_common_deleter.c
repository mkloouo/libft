/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_common_deleter.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 19:34:35 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/08 19:34:50 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/memory.h>

void	ft_common_deleter(void *mem, size_t size)
{
	(void)size;
	free(mem);
}
