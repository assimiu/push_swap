#include "push_swap.h"

void print_prev(List **lis)
{
        List *ptr;

        ptr = *lis;
	printf("\n======≠=======≠========≠=====≠=====\n");
	printf("\nORDEM DECRESCENTE:\n");
        while(ptr != 0)
        {
                printf("id: %i          value:%i\n",ptr->id, ptr->value);
                ptr = ptr->prev_element;
                sleep(1);
        }
}
