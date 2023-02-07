#include "swap_h/push_swap.h"

/*
int swap_first_max(List **a, int first_value)
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

int swap_first_max(List **a, int first_value, int (*swap)(List **), int min)
{
	int value_2;
	int retorno;

	retorno = ERRO;
	if ((*a)==0)
		return (ERRO);
	if ((*a)->next_element == NULL)
		return (ERRO);
	value_2 = (*a)->next_element->value;
	if (first_value < value_2 && min)
		retorno = swap(a);
	if (first_value > value_2 && !min)
		retorno = swap(a);
	return (retorno);
}


int small(List **a, int first_value)
{
	int retorno;

	retorno = ERRO;
	if ((*a)==0)
		return (ERRO);
	retorno = swap_first_max(a, first_value, swap_sx, 1);
	if (swap_first_max(a, first_value, swap_rx, 1) != ERRO)
	{
		retorno = small(a, first_value);
	}
	return (retorno);
}

void f(List **a, List **b)
{
	int retorno;

	while ((*a) != NULL)
	{
		small(a, (*a)->value);
		swap_px(a, b);
	}
}

int main()
{
	struct List *m, *a, *b;
	a = 0;
	b = 0;
	add_element(&a, 35);
	add_element(&a, 15);
	add_element(&a, 10);
	add_element(&a, 25);
	add_element(&a, 45);
	add_element(&a, 2);
	add_element(&a, 43);
	add_element(&a, -1);
	add_element(&a, 12);
	add_element(&a, 634);
	add_element(&a, 665);
	add_element(&a, 607);
	add_element(&a, 108);
	add_element(&a, 60);
//	swap_first_max(&b);

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



