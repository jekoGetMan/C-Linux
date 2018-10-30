NAME = libft.a

SOURCE = ./srcs/ft_list_size.c

OUTPUT = ./*.o

HEADER = ./includes

all: $(NAME)

$(NAME):
	gcc  -c -Wall -Wextra -Werror -I$(HEADER) $(SOURCE)
	ar rc libft.a $(OUTPUT)

clean: 
	rm -f $(OUTPUT)

fclean: clean
		rm -f $(NAME)

re: fclean all