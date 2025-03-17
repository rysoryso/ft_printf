NAME = libftprintf.a
SRCS = ft_printf.c convert.c case_c.c case_s.c case_p.c case_d.c case_u.c case_x.c \
		print_c.c print_s.c
OBJS = $(SRCS:%.c=%.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I libft
LIBFT_DIR = libft
LIBFT_NAME = libft.a

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c -o $@ $<

$(NAME):$(OBJS)
	make -C $(LIBFT_DIR)
	cp $(LIBFT_DIR)/$(LIBFT_NAME) $(NAME)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	make -C $(LIBFT_DIR) clean
	rm -f $(OBJS)

fclean: clean
	make -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
