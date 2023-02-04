#include "push_swap.h"

int swap_px(List **a, List **b)
{
        List *xpo;
        int value;

        value = -1;
        if (*a == 0)
                return (NULL);
        value = (*a)->value;
        
        xpo = (*a)->next_element;
        xpo->last_element = (*a)->last_element;
        xpo->last_element->next_element = xpo;
        free((*a));
        (*a) = xpo;
        (*a)->prev_element = (*a)->last_element;
        (*a)->last_element->next_element = (*a);
        add_element(b, value);
        return (OK);
}
