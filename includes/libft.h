/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 19:19:07 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/20 20:04:39 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/*
** string.h is for size_t import.
*/
# include <string.h>

/*
** Input/Output Handling functions.
*/

/*
** Defines for get_next_line
*/
# define BUFF_SIZE 32
# define FD_SIZE 50000

/*
** Reads a line (till '\n' or EOF) from given fd and writes it to *line.
** Returns: -1, 0, 1 on error, EOF or more lines to read respectively.
*/
int						get_next_line(const int fd, char **line);

int						get_integer(char *prompt);
char					*get_string(char *prompt);

void					ft_putchar(char c);
void					ft_putchar_fd(char c, int fd);

void					ft_putstr(const char *s);
void					ft_putstr_fd(const char *s, int fd);
void					ft_putendl(const char *s);
void					ft_putendl_fd(const char *s, int fd);

void					ft_putnbr(int n);
void					ft_putnbr_fd(int n, int fd);

/*
** Single-linked list realization along with the useful functions.
*/

typedef struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}						t_list;

t_list					*ft_lstnew(const void *content, size_t content_size);
void					ft_lstadd(t_list **alst, t_list *elem);

void					ft_lstrev(t_list **alst);
size_t					ft_lstsize(t_list *lst);

void					ft_lstdelone(t_list **alst, void (*del)(void *,
size_t));
void					ft_lstdel(t_list **alst, void (*del)(void *, size_t));

void					ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list					*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

t_list					*ft_lstat(t_list *alst, unsigned int index);

/*
** Standart library.
*/

void					*ft_memalloc(size_t size);
void					ft_memdel(void **ap);

char					*ft_itoa(int n);
char					*ft_itoa_base(int value, int base);
int						ft_atoi(const char *str);
double					ft_atod(const char *str);

/*
** String library realization with some other string-like functions.
*/

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
