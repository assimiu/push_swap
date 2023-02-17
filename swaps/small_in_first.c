#include "../swap_h/push_swap.h"

int small_in_first(List **a)
{
        int value_2;
        int retorno;

        retorno = ERRO;
        if ((*a)==0)
                return (ERRO);
        if ((*a)->next_element == NULL)
                return (ERRO);
        if ((*a)->value < (*a)->next_element->value)
                retorno = swap_sx(a, "sa\n");
        if ((*a)->value < (*a)->last_element->value)
        {
                retorno = swap_rx(a, "ra\n");
                small_in_first(a);
        }
        return (retorno);
}
