CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = push_swap

SRCS =\
      parsing/check_and_push.c\
      parsing/create_node.c\
      parsing/free.c\
      parsing/ft_atoi.c\
      parsing/ft_split.c\
      main.c\
      parsing/push_front.c\
      parsing/ft_substr.c\
      parsing/ft_strlen.c\
      ft_operations/rotate.c\
      ft_operations/push.c\
      ft_operations/swap.c\
      ft_operations/reverse_operations.c\


OBJS = $(SRCS:.c=.o)

INCLUDES = push_swap.h

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c $(INCLUDES)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
