# ****************************** Compiler Options ******************************
CC		:= cc
CFLAGS	:= -Wall -Wextra -Werror

# ******************************* Other commands *******************************
RM		:= rm -rf
AR		:= ar rcs
MKDIR	:= mkdir -p

# ******************************** Directories *********************************
INCLUDES_DIR	:= include
SRCS_DIR		:= src
LIBS_DIR		:= lib
OBJS_DIR		:= obj

# *********************************** Files ************************************
NAME	:=	libft.a
SRCS	:=	ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_lstadd_back.c \
			ft_lstadd_front.c \
			ft_lstclear.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstlast.c \
			ft_lstmap.c \
			ft_lstnew.c \
			ft_lstsize.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_split.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c
OBJS	:=	$(SRCS:.c=.o)
HEADER	:=	libft.h

# ********************************** Targets ***********************************
all:	$(NAME)

$(NAME):	$(addprefix $(OBJS_DIR)/, $(OBJS))
	$(AR) $(NAME) $?

$(OBJS_DIR)/%.o:	$(SRCS_DIR)/%.c $(INCLUDES_DIR)/$(HEADER)
	@$(MKDIR) -p $(OBJS_DIR)
	$(CC) $(CFLAGS) -I $(INCLUDES_DIR) -c -o $@ $<

clean:
	$(RM) $(OBJS_DIR)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
