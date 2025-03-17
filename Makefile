CC = cc
CFLAGS = -Wall -Wextra -Werror -g3
NAME = push_swap
SRCS =\
      parsing/check_and_push.c\
      parsing/create_node.c\
      parsing/addback.c\
      parsing/addlast.c\
      parsing/free.c\
      parsing/ft_atoi.c\
      parsing/ft_split.c\
      parsing/stack_size.c\
      main.c\
      parsing/ft_substr.c\
      parsing/ft_strlen.c\
      ft_operations/rotate.c\
      ft_operations/push.c\
      ft_operations/swap.c\
      ft_operations/reverse_operations.c\
      algo/move_min_to_top.c \
      algo/sort_three.c \
      algo/is_sorted.c \
      algo/ft_find.c \
      algo/small_sort.c \
      algo/radix_sort.c \

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
.SECONDARY: $(OBJS)
.PHONY: all clean fclean re