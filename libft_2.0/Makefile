NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
INCLUDE = libft.h
AR = ar -rcs
RM = rm -f
SRC = ft_isalpha.c\
	  ft_isdigit.c\
	  ft_isalnum.c\
	  ft_isascii.c\
	  ft_isprint.c\
	  ft_toupper.c\
	  ft_tolower.c\
	  ft_strlen.c\
	  ft_memset.c\
	  ft_bzero.c\
	  ft_memcpy.c\
	  ft_memmove.c\
	  ft_strlcpy.c\
	  ft_strlcat.c\
	  ft_memcmp.c\
	  ft_strncmp.c\
	  ft_memchr.c\
	  ft_strchr.c\
	  ft_strrchr.c\
	  ft_strnstr.c\
	  ft_atoi.c\
	  ft_strdup.c\
	  ft_calloc.c\
	  ft_putchar_fd.c\
	  ft_putstr_fd.c\
	  ft_putendl_fd.c\
	  ft_putnbr_fd.c\
	  ft_substr.c\
	  ft_strjoin.c\
	  ft_itoa.c\
	  ft_split.c\
	  ft_striteri.c\
	  ft_strmapi.c\
	  ft_strtrim.c

BSRC=  ft_lstnew.c\
	   ft_lstadd_front.c\
	   ft_lstsize.c\
	   ft_lstlast.c\
	   ft_lstadd_back.c\
	   ft_lstdelone.c\
	   ft_lstclear.c\
	   ft_lstiter.c\
	   ft_lstmap.c

OBJS = $(SRC:%.c=%.o)

BOBJ = $(BSRC:.c=.o)

all:  $(NAME)

bonus :	$(OBJ) $(BOBJ) 
	$(AR) -r $(NAME) $?
	@echo "(ﾉ◕ヮ◕)ﾉ*:・ﾟ✧ Compilando bonus, espere unos segundos..."

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
rebonus: fclean bonus

.PHONY: all clean fclean re bonus rebonus

