#include "swap_h/push_swap.h"

void small_in_first(List **a)
{
	int value_last;
	int retorn_v;
	int value_1;
	int value_2;

	retorn_v = 0;
	printf("abc %i\n", (*a)->value);
	if ((*a)==0)
		return ;
	if ((*a)->next_element == NULL)
		return ;
	value_2 = (*a)->next_element->value;
	value_last = (*a)->last_element->value;
	value_1 =(*a)->value;
	if (value_1 > value_2)
		retorn_v = swap_sx(a);
	if (value_1 > value_last && retorn_v == OK_S)
	{
		swap_rx(a);
		return (small_in_first(a));
	}
}

void f(List **a, List **b)
{
//	while ((*a) != NULL)
	{
		small_in_first(a);
		swap_px(a, b);
	}
}

int main()
{
	struct List *m, *a, *b;
	a = 0;
	b = 0;
	add_element(&b, 10);
	add_element(&b, 20);
	add_element(&b, 30);
//	small_in_first(&b);

//	add_element(&b, 59);
//	add_element(&b, 60);
//	add_element(&b, 70);

	print_next(&b);

	f(&b, &a);
	f(&b, &a);
	f(&b, &a);
//	small_in_first(&b);
//	swap_rx(&b);
//	get_small(&b);

	printf("B POIS F");
	print_next(&b);

	printf("\n A POIS F");
//	ordem(NULL);
	print_next(&a);
	return 0;
}



