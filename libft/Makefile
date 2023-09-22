NAME = libft.aNAME = libft.a
CC = gcc
CCFLAGS = -Wall -Werror -Wextra
INCLUDE = libft.h
AR = ar -rcs
RM = rm -f
SRC = ft_isalpha.c
OBJS = $(SRC:%.c=%.o)

all:  $(NAME)

$(NAME): $(OBJS) $(INCLUDE)
		$(AR) $(NAME) $(OBJS)

%.o : %.c
			$(CC) $(CCFLAGS)  -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
CC = gcc
CCFLAGS = -Wall -Werror -Wextra
INCLUDE = libft.h
AR = ar -rcs
RM = rm -f
SRC = ft_isalpha.c
OBJS = $(SRC:%.c=%.o)

all:  $(NAME)

$(NAME): $(OBJS) $(INCLUDE)
	$(AR) $(NAME) $(OBJS)

%.o : %.c
		$(CC) $(CCFLAGS)  -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $NAME)

re: fclean all

.PHONY: all clean fclean re
