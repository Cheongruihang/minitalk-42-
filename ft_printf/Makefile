SRCS := ft_print_decimal.c ft_print_lowerhexadecimal.c ft_print_unsignednum.c ft_print_upperhexadecimal.c ft_print_pointer.c ft_printf.c \
		ft_putchar.c ft_print_string.c ft_unsigned_itoa.c ft_itoa.c

OBJ :=  $(SRCS:.c=.o) 

NAME := libftprintf.a
CC:= gcc
FLAGS := -Wall -Wextra -Werror

all: $(NAME) 
  
$(NAME):$(OBJ) 
	ar rcs $@ $^

$(OBJ): %.o:%.c
	 $(CC) $(FLAGS) -c $< -o $@
clean:
	rm -f $(OBJ)

fclean:clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus