#include "swap_h/push_swap.h"

void small_in_first(List **a)
{
	int value_last;
	int value_1;
	int value_2;

	if ((*a)==0)
		return ;
	if ((*a)->next_element == NULL)
		return ;
	value_2 = (*a)->next_element->value;
	value_last = (*a)->last_element->value;
	value_1 =(*a)->value;
	if (value_1 > value_2)
		swap_sx(a);
	if (value_1 > value_last)
		swap_rx(a);
}

void f(List **a, List **b)
{
	while ((*a) != NULL)
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
	add_element(&a, 10);
	add_element(&a, 20);
	add_element(&a, 30);
//	small_in_first(&b);

//	add_element(&b, 59);
//	add_element(&b, 60);
//	add_element(&b, 70);

	printf("A ORIGINAL");
	print_next(&b);

	f(&a, &b);
//	f(&b, &a);
//	f(&b, &a);
//	small_in_first(&a);
//	swap_rx(&b);
//	get_small(&b);
//	swap_px(&a, &b);
	printf("\n POIS F ORIGINAL");
	print_next(&a);

//	f(&a, &b);
	printf("\n B POIS F");
//	ordem(NULL);
	print_next(&b);

//	f(&a, &b);
        printf("\n B POIS F");
//      ordem(NULL);
        print_next(&b);
	return 0;
}



