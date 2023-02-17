#include "../swap_h/push_swap.h"

int swap_sx(List **x, char *str)
{
	int value;

	if ((*x) == 0)
		return (ERRO);
	if (((*x)->id) > 1)
	{
		value = (*x)->value;
		(*x)->value = (*x)->next_element->value;
		(*x)->next_element->value = value;
	}
	ft_printstr(str);
	return (OK_S);
}
