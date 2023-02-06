#include "../swap_h/push_swap.h"

int swap_rx(List **x)
{
	List *ptr_l;
	List *ptr_f;
	int value_temp;

	ptr_l = (*x)->last_element;
	ptr_f = (*x);
	if (x != NULL && (*x)->id > 1)
	{
		while(ptr_f != ptr_l)
		{
			value_temp = ptr_f->value;
			ptr_f->value = ptr_l->value;
			ptr_l->value = value_temp;
			ptr_f = ptr_f->next_element;
			if (ptr_f->value == ptr_l->value)
				break ;
			ptr_l = ptr_l->prev_element;
		}
		printf("R\n");
		return (OK_R);
	}
    return (ERRO);
}
