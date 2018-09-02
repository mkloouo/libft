/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 18:28:45 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 18:32:33 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H

# include <stddef.h>

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
char const              *ft_strchr(char const *haystack, char needle);
char					*ft_strrchr(const char *str, int c);

size_t					ft_strlen(const char *str);
int						ft_strcc(char *str, char c);
int						ft_strcs(char *str, char *s);

char					*ft_strrev(char *str);
int						ft_strequ(const char *s1, const char *s2);
int						ft_strnequ(const char *s1, const char *s2, size_t n);

char					*ft_strsub(const char *s, unsigned int start,
size_t len);
char					*ft_strjoin(const char *s1, const char *s2);
char					*ft_strtrim(const char *s);
char					**ft_strsplit(const char *s, char c);
void					ft_delsplit(char ***split);

/*
** Creating OR deleting strings.
*/

char					*ft_strnew(size_t size);
void					ft_strdel(char **as);

/*
** Letters processing.
*/

void					ft_striter(char *str, void (*f)(char*));
void					ft_striteri(char *str, void (*f)(unsigned int, char*));
char					*ft_strmap(const char *str, char (*f)(char));
char					*ft_strmapi(const char *str, char (*f)(unsigned int,
char));

/*
** Wide string.
*/



#endif
