FLGS= -will -werror -wextra

PATH_OBJS = objects/

NAME= $(PATH_OBJS)"push_swap.a"

PATH_SRC = swaps/

OBJS= $(PATH_OBJS)swap_px.o $(PATH_OBJS)add_element.o $(PATH_OBJS)swap_sx.o\
	  $(PATH_OBJS)swap_ss.o $(PATH_OBJS)swap_rx.o $(PATH_OBJS)swap_rr.o\
	   $(PATH_OBJS)print_next.o $(PATH_OBJS)print_prev.o $(PATH_OBJS)is_order.o\
		$(PATH_OBJS)swap_add.o $(PATH_OBJS)small_in_first.o

all: $(OBJS) $(NAME)

$(NAME): $(OBJS)
	ar rv $(NAME) $(OBJS)

$(PATH_OBJS)%.o: $(PATH_SRC)%.c
	gcc -c $< -o $@

fclean:
	rm -fr $(OBJS) $(NAME)

re: fclean all

a:
	gcc main.c -L$(PATH_OBJS) $(PATH_OBJS)push_swap.a -o main.o &&  ./main.o

.PHONY:	all clean fclean re
