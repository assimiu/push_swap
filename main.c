#include "swap_h/push_swap.h"

/*
int small(List **a, int first_value)
{
	int value_2;
	int retorno;

	retorno = ERRO;
	if ((*a)==0)
		return (ERRO);
	if ((*a)->next_element == NULL)
		return (ERRO);
	value_2 = (*a)->next_element->value;
	if (first_value < value_2)
		retorno = swap_sx(a);
	return (retorno);
}
*/



void f(List **a, List **b)
{
	int r;

	r = 1;
	while((*a) != NULL)
	{
		small_in_first(a);
		if ((*b) != NULL)
		{
			if ((*a)->value < (*b)->value)
			{
				swap_px(a, b);
				swap_px(&((*b)->next_element), a);
			}
		}
		swap_px(a, b);
	}
	while((*b) != NULL)
        {
		swap_px(b, a);
	}
	if (!is_order(a))
		r = 0;
	if(!is_order(a) && !r)
		f(a,b);
}

int main()
{
	struct List *m, *a, *b;
	a = 0;
	b = 0;
	swap_add(&a, 15);
	swap_add(&a, 33);
	swap_add(&a, 1);
	swap_add(&a, 159);
	swap_add(&a, 45);
	swap_add(&a, 5);
	swap_add(&a, 158);
	swap_add(&a, 150);
	swap_add(&a, -5);
	swap_add(&a, 8);
	swap_add(&a, 0);
	swap_add(&a, 70);
	swap_add(&a, 706);
	swap_add(&a, -7);
	swap_add(&a, 70);
//	small(&b);

//	add_element(&b, 59);
//	add_element(&b, 60);
//	add_element(&b, 70);




	printf("\nA ANTES");
	print_next(&a);

	f(&a, &b);
	printf("\n A POIS F");
	print_next(&a);

	printf("\n B POIS F");
	print_next(&b);

	printf("\n==order %i==\n", is_order(&a));
	return 0;
}



