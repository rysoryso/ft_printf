NAME = libftprintf.a
SRCS = $(wildcard *.c)
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
