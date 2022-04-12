# Libft

*C Library of usual functions to be used on various projects*

## Libft functions

**Note**: Please refer to doxygen documentation or man pages for function explanations

### Part 1 - Libc functions

* ft_isalpha
* ft_isdigit
* ft_isalnum
* ft_isascii
* ft_isprint
* ft_strlen
* ft_memset
* ft_bzero
* ft_memcpy
* ft_memmove
* ft_strlcpy
* ft_strlcat
* ft_toupper
* ft_tolower
* ft_strchr
* ft_strrchr
* ft_strncmp
* ft_memchr
* ft_strnstr
* ft_atoi
* ft_calloc
* ft_strdup

### Part 2 - Additional functions

* ft_substr
* ft_strjoin
* ft_strtrim
* ft_split
* ft_itoa
* ft_strmapi
* ft_striteri
* ft_putchar_fd
* ft_putstr_fd
* ft_putendl_fd
* ft_putnbr_fd

### Part 3 - Bonus functions

* ft_lstnew
* ft_lstadd_front
* ft_lstsize
* ft_lstlast
* ft_lstadd_back
* ft_lstdelone
* ft_lstclear
* ft_lstiter
* ft_lstmap

### Part 4 - Extra functions

* ft_doublelst_new
* ft_doublelst_addfront
* ft_doublelst_size
* ft_doublelst_last
* ft_doublelst_addback
* ft_doublelst_delone
* ft_doublelst_clear
* ft_doublelst_iter
* ft_doublelst_map
* ft_printf
* get_next_line

## Usage

```sh
git clone https://github.com/Archer-01/libft.git
cd libft
make
touch main.c
```
```c
#include "libft.h"

int	main(void)
{
	ft_printf("It's so convenient to have a library of useful functions\n");
	return (0);
}
```
```sh
gcc -L. -lft -I include main.c
./a.out
```

[![forthebadge](https://forthebadge.com/images/badges/made-with-c.svg)](https://forthebadge.com)
