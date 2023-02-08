#include "../swap_h/push_swap.h"

int is_order(List **a)
{
	List *ptr1;
	List *ptr2;
	List *temp;

	if ((*a) == NULL)
{
printf("b\n1\n");
		return (1);
}
	ptr1 = (*a);
	temp = (*a)->last_element;
	while(ptr1 != NULL)
	{
		ptr2 = ptr1;
		while(ptr2 != NULL)
		{
			if (ptr1->value > ptr2->value)
				return (0);
			if (temp->value < ptr2->value)
				return (0);
			ptr2 = ptr2->next_element;
			if (ptr2 != NULL && ptr2->value > temp->value)
			{
				printf("\nb14\n");
				return (1);
			}
			temp = temp->last_element;
		}
		ptr1 = ptr1->next_element;
	}
	return (1);
}
