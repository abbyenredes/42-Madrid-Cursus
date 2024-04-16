NAME = server client
CC = gcc
CFLAGS = -Wall -Werror -Wextra
INCLUDE = minitalk.h
AR = ar -rcs
RM = rm -f
SRC = 

OBJS = $(SRC:%.c=%.o)

all:  $(NAME)

%.o:%.c
        $(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS) $(INCLUDE)
        cd libft && $(MAKE)
         @echo "(ﾉ◕ヮ◕)ﾉ*:・ﾟ✧ Compilando, espere unos segundos..."
        $(CC)  -L libft -lft $(NAME) $(OBJS)

clean:
        cd libft && $(MAKE) clean
        $(RM) $(OBJS)
        $(RM) $(BOBJ)

fclean: clean
        cd libft && $(MAKE) fclean
        $(RM) $(NAME)
         @echo "(╯°□°）╯︵ ┻━┻ todo limpio por aquí!"

re: fclean all

.PHONY: all clean fclean re
.SILENT: