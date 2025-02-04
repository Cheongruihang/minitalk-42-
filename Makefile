SERVER = server
CLIENT = client

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

SRC_DIR = src
LIBFT_DIR = libft
PRINTF_DIR = ft_printf

LIBFT = $(LIBFT_DIR)/libft.a
PRINTF = $(PRINTF_DIR)/libftprintf.a

SRC_SERVER = $(SRC_DIR)/server.c
SRC_CLIENT = $(SRC_DIR)/client.c

all: $(SERVER) $(CLIENT)

$(SERVER): $(SRC_SERVER) $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) $(SRC_SERVER) $(LIBFT) $(PRINTF) -o $(SERVER)
	@echo "Server is ready!"

$(CLIENT): $(SRC_CLIENT) $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) $(SRC_CLIENT) $(LIBFT) $(PRINTF) -o $(CLIENT)
	@echo "Client is ready!"

$(LIBFT):
	@make -C $(LIBFT_DIR)

$(PRINTF):
	@make -C $(PRINTF_DIR)

clean:
	@make clean -C $(LIBFT_DIR)
	@make clean -C $(PRINTF_DIR)
	@echo "Cleaned object files."

fclean: clean
	@make fclean -C $(LIBFT_DIR)
	@make fclean -C $(PRINTF_DIR)
	rm -f libft.a libftprintf.a
	rm -f $(SERVER) $(CLIENT)
	@echo "Cleaned binaries and libraries."

re: fclean all

.PHONY: all clean fclean re
