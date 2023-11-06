NAME = libft.a
BONUS = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = .
OBJ_DIR = .
BONUS_DIR = .

SRCS := ft_isspace.c ft_putstr_fd.c ft_strncmp.c ft_atoi.c ft_isupper.c ft_split.c ft_strnstr.c ft_bzero.c ft_itoa.c ft_memchr.c ft_strchr.c	 ft_strrchr.c ft_calloc.c ft_memcmp.c	ft_strdup.c	 ft_strrev.c ft_isalnum.c ft_memcpy.c ft_striteri.c ft_strtrim.c ft_isalpha.c ft_memmove.c ft_strjoin.c ft_substr.c ft_isascii.c ft_memset.c ft_strlcat.c ft_tolower.c ft_isdigit.c ft_putchar_fd.c ft_strlcpy.c ft_toupper.c ft_islower.c ft_putendl_fd.c ft_strlen.c ft_isprint.c ft_putnbr_fd.c ft_strmapi.c

BONUSSRCS := ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

BONUSOBJS := $(BONUSSRCS:.c=.o)

OBJS := $(SRCS:.c=.o)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	cc $(CFLAGS) -c $< -o $@

$(BONUS) : $(BONUSOBJS)
	ar rcs $(NAME) $(OBJS) $(BONUSOBJS)

all: $(NAME)

clean:
	rm -f $(OBJS) $(BONUSOBJS)

fclean: clean 
	rm -f $(NAME)

re: fclean all

bonus:
	rm -f $(NAME)

.PHONY : all clean fclean re bonus
