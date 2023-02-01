#include "push_swap.h"


void add_fist_in_last(List **a, List **b)
{
	List *ptr_tmp;

	if (*b == 0)
	{
		(*b) = (*a)->fist_element;
		(*a)->fist_element = (*a)->next_element;
		(*a) = (*a)->next_element;

		(*b)->fist_element = (*b);
		(*b)->last_element = (*b);
		(*b)->next_element = 0;
		printf("Primeiro elemento inserido no B \n");
		return ;
	}
}

int main()
{
	struct List m, *a, *b;
	a = 0;
	b = 0;
	add_element(&a, 18);
	add_element(&a, 618);
	add_element(&a, 8);
	add_element(&a, 2);

	add_fist_in_last(&a, &b);
	add_fist_in_last(&a, &b);
	print_elements(&b);
	return 0;
}


