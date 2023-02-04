#include "push_swap.h"

void print_next(List **lis)
{
	List *ptr;

	ptr = *lis;
	while(ptr != 0)
	{
		printf("id: %i		value:%i\n",ptr->id, ptr->value);
		ptr = ptr->next_element;
		sleep(1);
	}
}
