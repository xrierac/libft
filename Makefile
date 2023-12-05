
NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = .
OBJ_DIR = .
BONUS_DIR = .

SRCS := ft_isspace.c ft_putstr_fd.c ft_strncmp.c ft_atoi.c ft_isupper.c ft_split.c ft_strnstr.c ft_bzero.c ft_itoa.c ft_memchr.c ft_strchr.c	 ft_strrchr.c ft_calloc.c ft_memcmp.c	ft_strdup.c	 ft_strrev.c ft_isalnum.c ft_memcpy.c ft_striteri.c ft_strtrim.c ft_isalpha.c ft_memmove.c ft_strjoin.c ft_substr.c ft_isascii.c ft_memset.c ft_strlcat.c ft_tolower.c ft_isdigit.c ft_putchar_fd.c ft_strlcpy.c ft_toupper.c ft_islower.c ft_putendl_fd.c ft_strlen.c ft_isprint.c ft_putnbr_fd.c ft_strmapi.c ft_putnbr_base.c

BONUSSRCS := ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

BONUSOBJS := $(BONUSSRCS:.c=.o)
OBJS := $(SRCS:.c=.o)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o:%.c
	cc $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJS) $(BONUSOBJS) .bonus

fclean: clean 
	rm -f $(NAME)

re: fclean all

bonus : .bonus

.bonus: $(OBJS) $(BONUSOBJS)
	ar rcs $(NAME) $?
	touch .bonus

.PHONY : all clean fclean re bonus
