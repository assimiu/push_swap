FLGS= -will -werror -wextra

PATH_OBJS = objects/

NAME= $(PATH_OBJS)"push_swap.a"

PATH_SRC = swaps/

OBJS= $(PATH_OBJS)swap_px.o $(PATH_OBJS)swap_sx.o $(PATH_OBJS)ft_printnbr.o\
	  $(PATH_OBJS)swap_ss.o $(PATH_OBJS)swap_rx.o $(PATH_OBJS)swap_rr.o\
	   $(PATH_OBJS)print_next.o $(PATH_OBJS)print_prev.o $(PATH_OBJS)is_order.o\
		$(PATH_OBJS)swap_add.o $(PATH_OBJS)small_in_first.o $(PATH_OBJS)ft_printstr.o\
		$(PATH_OBJS)ft_strlen.o $(PATH_OBJS)ft_atoi.o 

all: $(OBJS) $(NAME)

$(NAME): $(OBJS)
	ar rv $(NAME) $(OBJS)

$(PATH_OBJS)%.o: $(PATH_SRC)%.c
	gcc -c $< -o $@

fclean:
	rm -fr $(OBJS) $(NAME)

re: fclean all

a:
	gcc main.c -L$(PATH_OBJS) $(PATH_OBJS)push_swap.a -o push_swap

.PHONY:	all clean fclean re
