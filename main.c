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

int swap_px(List **a, List **b)
{
	int value;
	List *xpo;
	List *o;

	xpo = (*a);
	(*a)->next_element->prev_element = (*a);
	(*a) = (*a)->next_element;
	(*a)->last_element = xpo->last_element;
	(*a)->last_element->next_element = (*a);
	(*a)->fist_element = (*a);
	
	free(xpo);
	return (0);
}

int main()
{
	struct List m, *a, *b;
	a = 0;
	b = 0;
	add_element(&b, 20);
	add_element(&b, 30);
	add_element(&b, 40);
	swap_px(&b, &b);
	print_elements(&b);
	return 0;
}


