#include "../swap_h/push_swap.h"

void print_next(List **lis)
{
	List *ptr;

	ptr = *lis;
	printf("\n=======≠========≠======≠\n");
	printf("    ORDEM CRESCENTE\n");
	printf("=======≠========≠======≠\n");
	while(ptr != 0)
	{
		printf("id: %i		value:%i\n",ptr->id, ptr->value);
		ptr = ptr->next_element;
	}
	printf("=======≠========≠======≠\n\n");
}
