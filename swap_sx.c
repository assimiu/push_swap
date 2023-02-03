#include "push_swap.h"

int swap_sx(List **x)
{
	int value;

	if ((*x) == 0)
		return (1);
	
	if (((*x)->last_element->id) > 0)
	{
		value = (*x)->value;
		(*x)->value = (*x)->next_element->value;
		(*x)->next_element->value = value;
	}
	return (0);
}