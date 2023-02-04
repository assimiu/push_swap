#include "push_swap.h"

int swap_px(List **a, List **b)
{
        List *xpo;
        int value;

        value = -1;
        if (*a == 0)
                return (ERRO);
       	value = (*a)->value;
	add_element(b, value);
	if((*a)->fist_element != (*a)->last_element)
	{
		(*a) = (*a)->next_element;
		free((*a)->prev_element);
	        (*a)->prev_element = 0;
		return (OK);
	}
	free((*a));
	(*a) = 0;
	return (OK);
}

/*
if ((*a)->next_element == 0)
        {
                free((*a));
//              (*a) = 0;
        }
        else
        {
                (*a) = (*a)->next_element;
                free((*a)->prev_element->fist_element);
                (*a)->prev_element = 0;
        }
*/
