#include "push_swap.h"

void print_elements(List **lis)
{
	List *ptr;

	ptr = *lis;
	while(ptr != 0)
	{
		printf("%i\n", ptr->value);
		ptr = ptr->next_element;
	}
}