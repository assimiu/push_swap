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

int small(List **a)
{
	int value_2;
	int retorno;

	retorno = ERRO;
	if ((*a)==0)
		return (ERRO);
	if ((*a)->next_element == NULL)
		return (ERRO);
	if ((*a)->value > (*a)->next_element->value)
		retorno = swap_sx(a);
	if ((*a)->value > (*a)->last_element->value)
	{
		retorno = swap_rx(a);
		small(a);
	}
	return (retorno);
}



void f(List **a, List **b)
{
	while((*a) != NULL)
	{
		small(a);
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
	
	

}

int main()
{
	struct List *m, *a, *b;
	a = 0;
	b = 0;
	add_element(&a, 15);
	add_element(&a, 1);
	add_element(&a, 23);
	add_element(&a, 43);
	add_element(&a, 190);
	add_element(&a, 15);
	add_element(&a, 11);
	add_element(&a, -1);
	add_element(&a, 41);
	add_element(&a, 145);
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
	return 0;
}



