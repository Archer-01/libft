/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:36:41 by hhamza            #+#    #+#             */
/*   Updated: 2022/08/03 19:58:15 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

# define BUFFER_SIZE 42
# define HEXA_LEN 16
# define HEXA_UPPER "0123456789ABCDEF"
# define HEXA_LOWER "0123456789abcdef"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

typedef struct s_double_list
{
	void					*content;
	struct s_double_list	*next;
	struct s_double_list	*prev;
}	t_double_list;

typedef enum e_bool
{
	FALSE = 0,
	TRUE = 1
}	t_bool;

t_bool			ft_isalpha(int c);
t_bool			ft_isdigit(int c);
t_bool			ft_isalnum(int c);
t_bool			ft_isascii(int c);
t_bool			ft_isprint(int c);
size_t			ft_strlen(const char *s);
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
char			*ft_strnstr(const char *haystack, const char *needle, \
	size_t len);
int				ft_atoi(const char *str);
double			ft_atof(char const *str);
void			*ft_calloc(size_t count, size_t size);
void			*ft_realloc(void *ptr, size_t size);
char			*ft_strdup(const char *s1);
char			*ft_append_char(char *str, char c);
char			*ft_append_str(char *s1, char const *s2);

char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
int				ft_putchar_fd(char c, int fd);
int				ft_putstr_fd(char *s, int fd);
int				ft_putendl_fd(char *s, int fd);
int				ft_putnbr_fd(int n, int fd);

t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), \
	void (*del)(void *));

char			*get_next_line(int fd);

int				ft_putchar(char c);
int				ft_putstr(const char *str);
int				ft_putnbr(int nb);
int				ft_putnbr_unsigned(unsigned int nb);
int				ft_putnbr_hex(unsigned int nb, const char *base);
int				ft_putaddr_hex(unsigned long nb, const char *base);
int				ft_printf(const char *format, ...);
int				ft_putaddr_hex_fd(unsigned long nb, const char *base, int fd);
int				ft_putnbr_unsigned_fd(unsigned int nb, int fd);
int				ft_putnbr_hex_fd(unsigned int nb, const char *base, int fd);
int				ft_fprintf(int fd, const char *format, ...);

t_double_list	*ft_doublelst_new(void *content);
void			ft_doublelst_addfront(t_double_list **lst, t_double_list *new);
int				ft_doublelst_size(t_double_list *lst);
t_double_list	*ft_doublelst_last(t_double_list *lst);
void			ft_doublelst_addback(t_double_list **lst, t_double_list *new);
void			ft_doublelst_delone(t_double_list *lst, void (*f)(void *));
void			ft_doublelst_clear(t_double_list **lst, void (*del)(void *));
void			ft_doublelst_iter(t_double_list *lst, void (*f)(void *));
t_double_list	*ft_doublelst_map(t_double_list *lst, void *(*f)(void *), \
	void (*del)(void *));

int				ft_strcmp(const char *s1, const char *s2);

#endif
