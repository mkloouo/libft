/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 18:29:58 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 20:03:11 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTCTYPE_H
# define FTCTYPE_H

# define CASE_DIFF 32

/*
** Char library.
*/

int						ft_ishex(int c);

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
