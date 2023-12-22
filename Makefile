NAME = libftprintf.a
SRCS = ft_printf.c

CC = cc
CFLAGS = -Wall -Werror -Wextra

OBJS = $(SRCS:.c=.o)

LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

all: $(NAME)

$(NAME): libft $(OBJS)
	ar -r $(NAME) $(OBJS)

libft:
	make -C $(LIBFT_PATH)
	cp  $(LIBFT_PATH)/libft.a .
	mv libft.a $(NAME)

clean:
	rm -f $(OBJS)
	cd $(LIBFT_PATH) && make clean

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
