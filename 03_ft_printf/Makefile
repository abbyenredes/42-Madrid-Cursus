NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
INCLUDE = ft_printf.h
AR = ar -rcs
RM = rm -f
SRC = ft_printf.c\
		ft_printf_utils.c\

OBJS = $(SRC:%.c=%.o)

all:  $(NAME)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS) $(INCLUDE)
	 @echo "(ﾉ◕ヮ◕)ﾉ*:・ﾟ✧ Compilando, espere unos segundos..."
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)
	$(RM) $(BOBJ)

fclean: clean
	$(RM) $(NAME)
	 @echo "(╯°□°）╯︵ ┻━┻ todo limpio por aquí!"

re: fclean all

.PHONY: all clean fclean re
