/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 04:51:34 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/04 19:42:08 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

/*
** String library realization with some other string-like functions.
*/

/*
** string.h is for size_t import.
*/
# include <string.h>

/*
** More of a memory management functions.
*/
void					*ft_memset(void *b, int c, size_t len);
void					*ft_memcpy(void *dst, const void *src, size_t n);
void					*ft_memmove(void *dst, const void *src, size_t len);
void					*ft_memccpy(void *dst, const void *src, int c,
size_t n);
void					*ft_memchr(const void *s, int c, size_t n);
int						ft_memcmp(const void *s1, const void *s2, size_t n);
void					ft_bzero(void *s, size_t n);

/*
** String management && processing functions.
*/
char					*ft_strdup(const char *str);
char					*ft_strcpy(char *dst, const char *src);
char					*ft_strncpy(char *dst, const char *src, size_t len);
char					*ft_strcat(char *s1, const char *s2);
char					*ft_strncat(char *s1, const char *s2, size_t n);
size_t					ft_strlcat(char *dst, const char *src, size_t dstsize);
char					*ft_strstr(const char *haystack, const char *needle);
char					*ft_strnstr(const char *haystack, const char *needle,
size_t n);
int						ft_strcmp(const char *s1, const char *s2);
int						ft_strncmp(const char *s1, const char *s2, size_t n);
char					*ft_strchr(const char *s, int c);
char					*ft_strrchr(const char *str, int c);
size_t					ft_strlen(const char *str);

char					*ft_strrev(char *str);
int						ft_strequ(const char *s1, const char *s2);
int						ft_strnequ(const char *s1, const char *s2, size_t n);

char					*ft_strsub(const char *s, unsigned int start,
size_t len);
char					*ft_strjoin(const char *s1, const char *s2);
char					*ft_strtrim(const char *s);
char					**ft_strsplit(const char *s, char c);

/*
** Creating || deleting strings.
*/
char					*ft_strnew(size_t size);
void					ft_strdel(char **as);
void					ft_strclr(char *s);

/*
** Letters processing.
*/
void					ft_striter(char *str, void (*f)(char*));
void					ft_striteri(char *str, void (*f)(unsigned int, char*));
char					*ft_strmap(const char *str, char (*f)(char));
char					*ft_strmapi(const char *str, char (*f)(unsigned int,
char));

#endif
