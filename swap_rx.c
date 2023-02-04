#include "push_swap.h"

int swap_rx(List **x)
{
	List *ptr;
    List *temp;
    List *init;

	if (x == NULL || (*x) == NULL)
		return (ERRO);
	ptr = (*x)->last_element;
	init = ptr;
	ptr->next_element = ptr->prev_element;
	ptr->prev_element = NULL;
	ptr->last_element = (*x);
	while (ptr->next_element != NULL)
	{
		ptr = ptr->next_element;
		temp = ptr->next_element;
		ptr->next_element = ptr->prev_element;
		ptr->prev_element = temp;
	}
    (*x) = init;
    return (OK);
}