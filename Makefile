SRC	= $(addprefix $(SRC_DIR)/, \
ft_printf.c \
ft_char_format.c \
ft_string_format.c \
)
OBJS = $(SRC:.c=.o)
SRC_DIR	= ./SRC
INC_DIR	= .
NAME	= libftprintf.a
CC = gcc
AR = ar
FLAGS = -Wall -Wextra -Werror
HEADER_FILE	= libft.h
LIBFT_PATH	=	./libft
LIBFT	=	$(LIBFT_PATH)/libft.a

all: $(LIBFT) $(NAME)

$(LIBFT):
		make -C $(LIBFT_PATH)

$(NAME) : $(OBJS)
	cp $(LIBFT) $(NAME)
	$(AR) -rcs $(NAME) $(OBJS)

%.o: %.c $(HEADER_FILE) Makefile
	$(CC) $(FLAGS) -c $< -o $@  -I $(LIBFT_PATH)

clean:
	make clean -C $(LIBFT_PATH)
	rm -f $(OBJS)

fclean : clean
	make fclean -C $(LIBFT_PATH)
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re libft
