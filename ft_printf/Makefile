CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs
NAME = libftprintf.a
RM = rm -rf

CFILES = ft_printf.c utils.c
OBJS = $(CFILES:.c=.o)

all:        $(NAME)

$(NAME):	$(OBJS)
			@$(AR) $(NAME) $(OBJS)

%.o:%.c
			$(CC) $(CFLAGS) -c $^ -o $@
		
re:     	fclean all

fclean:     clean
			@$(RM) $(NAME)

clean:
			@$(RM) $(OBJS)

.PHONY: all re fclean clean