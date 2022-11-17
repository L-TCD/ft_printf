SRC	= $(addprefix $(SRC_DIR)/, \
ft_printf.c \
char_format.c \
string_format.c \
percent_format.c \
unsigned_format.c \
digit_format.c \
utils.c \
)
OBJS = $(SRC:.c=.o)
SRC_DIR	= ./SRC
INC_DIR	= ./INC
NAME	= libftprintf.a
CC = gcc
AR = ar
FLAGS = -Wall -Wextra -Werror
HEADER_FILE	= $(INC_DIR)/ft_printf.h
LIBFT_PATH	=	./libft
LIBFT	=	$(LIBFT_PATH)/libft.a

all: $(LIBFT) $(NAME)

$(LIBFT):
		make bonus -C $(LIBFT_PATH)

$(NAME) : $(OBJS)
	cp $(LIBFT) $(NAME)
	$(AR) -rcs $(NAME) $(OBJS) $(LIBFT)

%.o: %.c $(HEADER_FILE) Makefile $(LIBFT)
	$(CC) $(FLAGS) -c $< -o $@ -I $(LIBFT)

clean:
	make clean -C $(LIBFT_PATH)
	rm -f $(OBJS)

fclean : clean
	make fclean -C $(LIBFT_PATH)
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re libft
