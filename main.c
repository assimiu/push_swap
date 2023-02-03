#include "push_swap.h"


/*
void add_fist_in_last(List **a, List **b)
{
	List *xpo;
	List *new;
	
	if (*a == 0)
		return;
	new = malloc(sizeof(List));
	xpo = (*a);
	(*a)->next_element->last_element = (*a)->last_element;
	(*a)->next_element->fist_element = (*a)->fist_element;
	new->value = xpo->value;
	new->next_element = 0;
	if (*b == 0)
	{
		(*b) = new;
		(*b)->fist_element = new;
		(*b)->last_element = new;
		(*a) = (*a)->next_element;
		free(xpo);
		return;
	}
	new->prev_element = (*b)->prev_element;
	new->fist_element = (*b)->fist_element;
	(*b)->last_element->next_element = new;
	(*b)->last_element = new;
	(*a) = (*a)->next_element;
	free(xpo);
}
*/

int swap_sx(List **x)
{
	List *xpo;

	if ((*x) == 0)
		return (-1);
	
	if (((*x)->last_element->id) > 0)
	{
		xpo = (*x);
		(*x)->fist_element = (*x)->next_element->fist_element;
		(*x)->next_element = (*x)->next_element->next_element;
		(*x)->last_element = (*x)->next_element->last_element;
		(*x)->prev_element = xpo;

		xpo->next_element = (*x);
		xpo->fist_element = xpo;
		xpo->last_element = (*x)->last_element;
		xpo->prev_element = (*x)->last_element;


		(*x) = xpo;
		(*x)->last_element = xpo->last_element;
		(*x)->prev_element = xpo->last_element;
		(*x)->fist_element = (*x);

		printf("tem mais elementos\n");
	}
}

int main()
{
	struct List m, *a, *b;
	a = 0;
	b = 0;
	add_element(&a, 18);
	add_element(&a, 19);
	add_element(&a, 20);
	swap_sx(&a);
	print_elements(&a);
	return 0;
}


