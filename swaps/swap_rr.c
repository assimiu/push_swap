#include "../swap_h/push_swap.h"

int swap_rr(List **a, List **b)
{
    int resolt_a;
    int resolt_b;

    resolt_a = swap_rx(a, "r");
    resolt_b = swap_rx(b, "r");
	ft_printstr("\n");
    return  resolt_a == ERRO ? resolt_a : resolt_b;
}