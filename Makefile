
NAME="push_swap.a"

FLGS= -will -werror -wextra


PATH_OBJS = objects/

PATH_SRC = swaps/

OBJS= swap_px.o  add_element.o swap_sx.o\
	  swap_ss.o swap_rx.o swap_rr.o print_next.o print_prev.o

OBJS_LYB= $(PATH_OBJS)swap_px.o $(PATH_OBJS)add_element.o $(PATH_OBJS)swap_sx.o\
	  $(PATH_OBJS)swap_ss.o $(PATH_OBJS)swap_rx.o $(PATH_OBJS)swap_rr.o\
	   $(PATH_OBJS)print_next.o $(PATH_OBJS)print_prev.o

all:$(PATH_OBJS)  $(NAME) 

$(PATH_OBJS):
	mkdir $(PATH_OBJS)

$(NAME): $(OBJS)
	ar rv $(NAME) $(OBJS_LYB)
	mv $(NAME) $(PATH_OBJS)

%.o: $(PATH_SRC)%.c
	gcc -c $< -o $(PATH_OBJS)$@ 

fclean:
	rm -fr $(PATH_OBJS) $(NAME)

re: fclean all

a: re
	gcc main.c -L$(PATH_OBJS) $(PATH_OBJS)push_swap.a -o main.o &&  ./main.o