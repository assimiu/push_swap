

NAME="push_swap.a"

FLGS= -will -werror -wextra

SOURCE = ./

OBJS= p_value_last.o

all: $(NAME) $(a)

$(NAME): $(OBJS)
	ar rv $(NAME) $(OBJS)
a:
	gcc main.c -L. push_swap.a -o main.o && ./main.o

%.o: %.c
	gcc -c $< -o $@ 

fclean:
	rm -fr $(OBJS)
