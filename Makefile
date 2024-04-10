NAME = libftprintf.a
LIBFTNAME = libft.a

CXX = cc
CFLAGS = -Wall -Werror -Wextra
IFLAGS = -I.
LIBFTDIR = ./libft
LIBFT_PATH = $(LIBFTDIR)/$(LIBFTNAME)

SRCS = ft_printf.c ft_printchar.c ft_printstr.c ft_printptr.c ft_printdec.c ft_printhex.c ft_printuint.c \
		ft_utilities.c
		
OBJS = $(SRCS:.c=.o)

all: $(NAME)
	@echo "built $(NAME) successfully"

$(NAME): $(OBJS)
	@make -C $(LIBFTDIR)
	@cp $(LIBFT_PATH) $(LIBFTNAME)
	@mv $(LIBFTNAME) $(NAME)
	@ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CXX) $(CFLAGS) $(IFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@make clean -C $(LIBFTDIR)
	@echo "cleaned the object files successfully"

fclean: clean
	@rm -f $(NAME)
	@rm -f $(LIBFT_PATH)	

re: fclean all

.PHONY: all clean fclean re
