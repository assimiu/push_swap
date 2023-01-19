NAME=push_swap.a
GCC=gcc

OBJS=stack.o

all: $(OBJS) $(NAME) $(CMP)

$(NAME):
	ar -rcs $(NAME) $(OBJS)

%.o : %.c 
	$(GCC) -c $< -o $@ 
CMP:
	gcc push_swap.c -o push_swap.o && ./push_swap.o
fclean:
	rm -fr $(OBJS) $(NAME)