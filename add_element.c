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
		(*a)->next_element = (*a);
		(*a)->prev_element = (*a);
		(*a)->id = 1;
		return ;
	}
	ptr->next_element = (*a);
	(*a)->prev_element = ptr;
	ptr->last_element = (*a)->last_element;
	ptr->prev_element = (*a)->last_element;
	(*a)->last_element->next_element = ptr;
	ptr->fist_element = ptr;
	ptr->id = (*a)->id + 1;
	(*a) = ptr;

		
	
}

/*
			if(*a == 0)
		{
			ptr->id = 1;
			(*a) = ptr;
			(*a)->fist_element = (*a);
			(*a)->last_element = (*a);
			(*a)->next_element = (*a);
			(*a)->prev_element = (*a);
			printf("Primeiro elemento a inserir\n");
			return ;
		}
		ptr->fist_element = (*a);
		ptr->prev_element = (*a)->last_element;
		ptr->id = ((*a)->last_element->id) + 1;
		(*a)->last_element->next_element = ptr;
		(*a)->last_element = ptr;
		(*a)->prev_element = ptr;
		(*a)->last_element->next_element = (*a);
		*/
