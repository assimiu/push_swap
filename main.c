#include "swap_h/push_swap.h"


void small_in_first(List **a, int first_value, int last_value)
{
	int value_2;

	if ((*a)==0)
		return ;
	if ((*a)->next_element == NULL)
		return ;
	value_2 = (*a)->next_element->value;
	if (first_value < value_2)
		swap_sx(a);
	if ((*a)->value < last_value)
	{
		swap_rx(a);
		small_in_first(a, (*a)->value, (*a)->last_element->value);
	}
}

void f(List **a, List **b)
{
	int value_1;
	int value_2;
	int value_last;

	while ((*a) != NULL)
	{
		small_in_first(a, (*a)->value, (*a)->last_element->value);
		
		swap_px(a, b);
	}
}

int main()
{
	struct List *m, *a, *b;
	a = 0;
	b = 0;
	add_element(&a, 10);
	add_element(&a, 25);
	add_element(&a, 35);
	add_element(&a, 15);
	add_element(&a, 45);
	add_element(&a, 2);
	add_element(&a, 5);
	add_element(&a, 0);
	add_element(&a, 65);
	add_element(&a, 60);
	add_element(&a, 85);
	add_element(&a, 100);
	add_element(&a, 185);
	add_element(&a, 845);
	add_element(&a, 8512);
	add_element(&a, 125);
//	small_in_first(&b);

//	add_element(&b, 59);
//	add_element(&b, 60);
//	add_element(&b, 70);




	printf("\nA ANTES");
	print_next(&a);

	f(&a, &b);

	printf("\n B POIS F");
	print_next(&b);
	return 0;
}



