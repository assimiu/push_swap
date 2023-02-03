#include "push_swap.h"

int swap_ss(List **a, List **b)
{
	int return1;
	int return2;

	return1 = swap_sx(a);
	return2 = swap_sx(b);
	return (return1 == ERRO ? return1 : return2);
}

