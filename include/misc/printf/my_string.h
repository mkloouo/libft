/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 20:33:46 by modnosum          #+#    #+#             */
/*   Updated: 2018/08/20 20:16:34 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_STRING_H
# define MY_STRING_H

# include <stddef.h>
# include <sys/types.h>

char const	*my_strchr(char const *haystack, char needle);
void		my_putnstr(char *str, size_t n);
void		my_strfill(char *str, size_t len, char ch);

void		my_strncpy(char *dst, const char *src, size_t n);
char		*my_wstrncpy(char *dst, wchar_t const *src, size_t n);

char		*my_resize_str(const char *src, size_t size, size_t new_size);
char		*my_strnew(size_t size, char c);

size_t		my_wchar_size(wchar_t c);
size_t		my_wstrlen(wchar_t const *str);
size_t		my_wstrclen(wchar_t const *str, int is_prec, size_t precision);
size_t		my_strlen(char const *str);

#endif
