NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = cc
LL = ar -r
SORCS = ft_calloc.c	ft_isascii.c ft_itoa.c ft_memcpy.c ft_putchar_fd.c ft_putstr_fd.c ft_strdup.c \
		ft_strlcat.c ft_strmapi.c ft_strrchr.c ft_tolower.c ft_atoi.c ft_isalnum.c ft_isdigit.c \
		ft_memchr.c ft_memmove.c ft_putendl_fd.c ft_split.c ft_striteri.c ft_strlcpy.c ft_strncmp.c \
		ft_strtrim.c ft_toupper.c ft_bzero.c ft_isalpha.c ft_isprint.c ft_memcmp.c ft_memset.c \
		ft_putnbr_fd.c ft_strchr.c ft_strjoin.c ft_strlen.c ft_strnstr.c ft_substr.c \
 
BSORCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
		 ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c \
		 ft_lstmap_bonus.c 

BOBJS = $(BSORCS:.c=.o)

OBJS = $(SORCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(LL) $(NAME) $(OBJS)

$(OBJS):%.o: %.c
	$(CC) $(CFLAGS) $< -c

bonus: $(BOBJS) $(NAME)
	$(LL) $(NAME) $(BOBJS) $(OBJS)

$(BOBJS):%.o: %.c
	$(CC) $(CFLAGS) $< -c

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
