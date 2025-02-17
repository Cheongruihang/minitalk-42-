SERVER = server
CLIENT = client
SERVER_BONUS = server_bonus
CLIENT_BONUS = client_bonus

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
LIBFT_DIR = libft
PRINTF_DIR = ft_printf
BNS_DIR = bonus
SRC_DIR = src

LIBFT = $(LIBFT_DIR)/libft.a
PRINTF = $(PRINTF_DIR)/libftprintf.a

SRC_SERVER = $(SRC_DIR)/server.c
SRC_CLIENT = $(SRC_DIR)/client.c
BNS_SERVER = $(BNS_DIR)/server_bonus.c
BNS_CLIENT = $(BNS_DIR)/client_bonus.c

OBJ_SERVER = $(SRC_SERVER:.c=.o)
OBJ_CLIENT = $(SRC_CLIENT:.c=.o)
OBJ_SERVER_BONUS = $(BNS_SERVER:.c=.o)
OBJ_CLIENT_BONUS = $(BNS_CLIENT:.c=.o)

DEPS = $(LIBFT) $(PRINTF)

all: $(SERVER) $(CLIENT)

bonus: $(SERVER_BONUS) $(CLIENT_BONUS)

$(SERVER): $(OBJ_SERVER) $(DEPS)
	$(CC) $(CFLAGS) $(OBJ_SERVER) $(DEPS) -o $(SERVER)

$(CLIENT): $(OBJ_CLIENT) $(DEPS)
	$(CC) $(CFLAGS) $(OBJ_CLIENT) $(DEPS) -o $(CLIENT)

$(SERVER_BONUS): $(OBJ_SERVER_BONUS) $(DEPS)
	$(CC) $(CFLAGS) $(OBJ_SERVER_BONUS) $(DEPS) -o $(SERVER_BONUS)

$(CLIENT_BONUS): $(OBJ_CLIENT_BONUS) $(DEPS)
	$(CC) $(CFLAGS) $(OBJ_CLIENT_BONUS) $(DEPS) -o $(CLIENT_BONUS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	make -C $(LIBFT_DIR)

$(PRINTF):
	make -C $(PRINTF_DIR)

clean:
	make clean -C $(LIBFT_DIR)
	make clean -C $(PRINTF_DIR)
	rm -f $(OBJ_SERVER) $(OBJ_CLIENT) $(OBJ_SERVER_BONUS) $(OBJ_CLIENT_BONUS)
	echo "Cleaned object files."

fclean: clean
	make fclean -C $(LIBFT_DIR)
	make fclean -C $(PRINTF_DIR)
	rm -f $(LIBFT) $(PRINTF)
	rm -f $(SERVER) $(CLIENT) $(SERVER_BONUS) $(CLIENT_BONUS)
	echo "Cleaned binaries and libraries."

re: fclean all

.PHONY: all clean fclean re bonus
