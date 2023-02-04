

NAME="push_swap.a"

FLGS= -will -werror -wextra

SOURCE = ./

OBJS= print_prev.o swap_px.o add_element.o print_next.o swap_sx.o swap_ss.o swap_rx.o swap_rr.o

all: $(NAME) $(a)

$(NAME): $(OBJS)
	ar rv $(NAME) $(OBJS)
a: re
	gcc main.c -L. push_swap.a -o main.o &&  ./main.o

%.o: %.c
	gcc -c $< -o $@ 

fclean:
	rm -fr $(OBJS) $(NAME)

re: fclean all
