#include "push_swap.h"

List *rm_first(List **a)
{
	List *xpo;
	List *new_elem;

	if (!(*a))
		return (0);
	new_elem = (List *) malloc(sizeof(List));
	if (!new_elem)
		return (0);
	xpo = (*a);
	new_elem->value = xpo->value;
	(*a) = (*a)->next_element;
	(*a)->prev_element  = xpo->last_element;
	(*a)->last_element = xpo->last_element;
	(*a)->last_element->next_element = (*a);
        (*a)->fist_element = (*a);
        (*a)->last_element->id = ((*a)->last_element->id) - 1;
        free(xpo);
	return (new_elem);
}

int swap_px(List **a, List **b)
{
	List *xpo;
	List *new_elem;

	new_elem = rm_first(a);
	if (!new_elem)
		return (-1);
	if (*b == 0)
	{
		(*b) = new_elem;
		(*b)->fist_element = (*b);
		(*b)->last_element = (*b);
		(*b)->next_element = (*b);
		(*b)->id = 0;
	}
	else
	{
		new_elem->next_element = (*b);
		(*b)->prev_element = new_elem;
		new_elem->last_element = (*b)->last_element;
		new_elem->prev_element = (*b)->last_element;
		(*b)->last_element->next_element = new_elem;
		new_elem->fist_element = new_elem;
		new_elem->last_element->id = (*b)->last_element->id + 1;
		(*b) = new_elem;
	}
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

	swap_px(&b, &a);
	swap_px(&b, &a);
	print_elements(&a);
	return 0;
}



