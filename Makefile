CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = push_swap

SRCS = check_and_push.c create_node.c free.c ft_atoi.c ft_split.c main.c push_front.c ft_substr.c ft_strlen.c

OBJS = $(SRCS:.c=.o)

INCLUDES = push_swap.h

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
