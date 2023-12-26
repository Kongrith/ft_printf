NAME = libftprintf.a
LIBFTNAME = libft.a

CC = cc
CFLAGS = -Wall -Werror -Wextra
LIBFTDIR = ./libft
LIBFT_PATH = $(LIBFTDIR)/$(LIBFTNAME)

SRCS = ft_printf.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): libft $(OBJS)
	ar -r $(NAME) $(OBJS)

libft:
	make -C $(LIBFTDIR)
	cp  $(LIBFT_PATH) .
	mv libft.a $(NAME)

clean:
	rm -f $(OBJS)
	cd $(LIBFTDIR) && make clean

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
