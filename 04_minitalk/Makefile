NAME_S = server
NAME_C = client
BONUS_NAME_S = server_bonus
BONUS_NAME_C = client_bonus
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
SRC_S = server.c
SRC_C = client.c  

OBJS_S = $(SRC_S:%.c=%.o)
OBJS_C = $(SRC_C:%.c=%.o)

BONUS_SRC_S = bonus_server.c
BONUS_SRC_C = bonus_client.c 
 
BONUS_OBJS_S = $(BONUS_SRC_S:%.c=%.o)
BONUS_OBJS_C = $(BONUS_SRC_C:%.c=%.o)

LIBFT = libft.a
LIBFT_DIR = ./libft/

	
all:  $(NAME_S) $(NAME_C)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME_S): $(OBJS_S) $(LIBFT_DIR)$(LIBFT)
	$(CC) $(CFLAGS) $(OBJS_S) $(LIBFT_DIR)$(LIBFT) -o $(NAME_S)


$(NAME_C): $(OBJS_C) $(LIBFT_DIR)$(LIBFT)
	$(CC) $(CFLAGS) $(OBJS_C) $(LIBFT_DIR)$(LIBFT) -o $(NAME_C)

$(LIBFT_DIR)$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR) --silent
	@echo "(ﾉ◕ヮ◕)ﾉ*:・ﾟ✧ Compilando, espere unos segundos..."

bonus:  $(BONUS_NAME_S) $(BONUS_NAME_C)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(BONUS_NAME_S): $(BONUS_OBJS_S) $(LIBFT_DIR)$(LIBFT)
	$(CC) $(CFLAGS) $(BONUS_OBJS_S) $(LIBFT_DIR)$(LIBFT) -o $(BONUS_NAME_S)

$(BONUS_NAME_C): $(BONUS_OBJS_C) $(LIBFT_DIR)$(LIBFT)
	$(CC) $(CFLAGS) $(BONUS_OBJS_C) $(LIBFT_DIR)$(LIBFT) -o $(BONUS_NAME_C)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)
	@echo "(ﾉ◕ヮ◕)ﾉ*:・ﾟ✧ Compilando, espere unos segundos..."

clean:
	
	$(MAKE) clean -C $(LIBFT_DIR)
	$(RM) $(OBJS_S) $(OBJS_C)
	$(RM) $(BONUS_OBJS_S) $(BONUS_OBJS_C)

fclean: clean
 	
	$(MAKE) fclean -C $(LIBFT_DIR)
	$(RM) $(NAME_S) $(NAME_C)
	$(RM) $(BONUS_NAME_S) $(BONUS_NAME_C)
	@echo "(╯°□°）╯︵ ┻━┻ Todo limpio por aquí!"

re: fclean all

.PHONY: all clean fclean re bonus
.SILENT:
