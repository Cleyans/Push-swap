NAME := push_swap

CC := cc

CFLAGS = -Wall -Wextra -Werror

FT			= include/Libft
LIBFT		= $(FT)/libft.a

SOURCE := src/push_swap.c src/subject_funcs01.c src/subject_funcs02.c src/libft_func.c src/subject_utils.c src/error.c src/not_radix.c src/lowest_number.c
OBJ 	= $(SOURCE:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LIBFT)

$(LIBFT): $(FT)
	$(MAKE) -C $(FT)
	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY:		all bonus clear clean fclean re
