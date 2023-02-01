#include "push_swap.h"

void p_value_last(List **a, List **b)
{
	List	*ptr;

	if (*a == 0 || *b == 0)
	{
		printf("ola mundo");
		return ;
	}
	ptr = *a;
	*a = ptr->next_element;
	free(ptr->next_element);
	ptr->next_element = 0;

	*b = ptr;
}
