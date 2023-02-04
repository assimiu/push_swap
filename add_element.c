#include "push_swap.h"

void add_element(List **a, int value)
{
	List	*ptr;

	ptr = (List *) malloc(sizeof(List));
	if (ptr ==0)
		return;
	ptr->value = value;
	if (*a == 0)
	{
		(*a) = ptr;
		(*a)->fist_element = (*a);
		(*a)->last_element = (*a);
		(*a)->next_element = 0;
		(*a)->prev_element = 0;
		(*a)->id = 1;
		return ;
	}
	(*a)->prev_element = ptr;
	ptr->next_element = (*a);
	ptr->last_element = (*a)->last_element;
	ptr->prev_element = 0;
	ptr->fist_element = ptr;
	ptr->id = (*a)->id + 1;
	(*a) = ptr;
}
