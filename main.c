#include "swap_h/push_swap.h"

void f(List **a, List **b)
{
	while((*a) != NULL)
	{
		small_in_first(a);
		if ((*b) != NULL)
		{
			if ((*a)->value > (*b)->value)
			{
				swap_px(a, b, "pb\n");
				swap_px(&((*b)->next_element), a, "pa\n");
			}
		}
		swap_px(a, b, "pb\n");
	}
	while((*b) != NULL)
		swap_px(b, a, "pa\n");
	if(!is_order(a))
		f(a,b);
}

int main(int argc, char **argv)
{
	struct List *a, *b;
	int i;
	int value;

	i = 1;
	value = 0;
	b = 0;
	a = 0;
	while(argc > i)
	{
		value = ft_atoi(argv[i]);
		swap_add(&a, value);
		i ++;
	}
	//print_next(&a);
	f(&a, &b);
	//print_next(&a);
	return 0;
}



