#include "../swap_h/push_swap.h"

int swap_sx(List **x)
{
	int value;

	if ((x[0]) == 0)
		return (ERRO);
	if (((*x)->id) > 1)
	{
		value = (x[0])->value;
		(x[0])->value = (x[0])->next_element->value;
		(x[0])->next_element->value = value;
	}
	return (OK_S);
}
