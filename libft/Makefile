NAME = libft.aNAME = libft.a
CC = gcc
CCFLAGS = -Wall -Werror -Wextra
INCLUDE = libft.h
AR = ar -rcs
RM = rm -f
SRC = ft_isalpha.c\
	  ft_isdigit.c\
	  ft_isalnum.c\
	  ft_isascii.c\
	  ft_isprint.c\
	  ft_toupper.c\
	  ft_tolower.c
OBJS = $(SRC:%.c=.o)

all:  $(NAME)

$(NAME): $(OBJS) $(INCLUDE)
		$(AR) $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
