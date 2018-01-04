/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctype.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 05:43:58 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/04 05:45:56 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CTYPE_H
# define FT_CTYPE_H

/*
** Char library.
*/

int						ft_isspace(int c);
int						ft_isdigit(int c);
int						ft_isalpha(int c);
int						ft_isalnum(int c);
int						ft_isascii(int c);
int						ft_isprint(int c);
int						ft_isupper(int c);
int						ft_islower(int c);

int						ft_tolower(int c);
int						ft_toupper(int c);

#endif
