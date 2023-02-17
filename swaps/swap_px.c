#include "../swap_h/push_swap.h"

int swap_px(List **a, List **b, char *str)
{
        List *xpo;
        int value;

	value = -1;
	if (*a == NULL)
			return (ERRO);
	value = (*a)->value;
	swap_add(b, value);
	if((*a)->fist_element != (*a)->last_element)
	{
		(*a) = (*a)->next_element;
		free((*a)->prev_element);
	        (*a)->prev_element = NULL;
		return (OK_P);
	}
	free((*a));
	(*a) = NULL;
	ft_printstr(str);
	return (OK_P);
}
