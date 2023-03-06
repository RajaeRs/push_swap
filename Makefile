NAME = push_swap

HEADER = push_swap.h variables.h utils/utils.h

SRC = main.c get_data.c $(addprefix utils/, mini_atoi.c ft_bzero.c ft_calloc.c sort_copy.c\
							ft_split.c ft_strlen.c ft_substr.c ft_strjoin.c print_operation.c get.c\
							 push_box.c reset_box.c utils.c) \
		     			$(addprefix operations/, swap.c rotate.c rev_rotate.c push.c) \
						$(addprefix sort/, is_sorted.c sort_data.c sort_three.c sort_five.c \
							sort_ls_hundred.c sort_mr_hundred.c)

OBJM = $(SRC:.c=.o)

CC = gcc

FLAGE = -Wall -Wextra -Werror

%.o: %.c
	$(CC) $(FLAGE) -c $< -o $@

$(NAME) : $(OBJM) $(HEADER)
	$(CC) $(FLAGE) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJM)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME) 

.PHONY: re clean fclean all