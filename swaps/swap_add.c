#include "../swap_h/push_swap.h"

void swap_add(List **a, int value)
{
	small_in_first(a);
	add_element(a, value);
	small_in_first(a);
}

