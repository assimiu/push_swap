#include "push_swap.h"

List *rm_first(List **a)
{
        List *xpo;
        List *new_elem;

        if (!(*a))
                return (NULL);
        new_elem = (List *) malloc(sizeof(List));
        if (!new_elem)
                return (NULL);
        xpo = (*a);
        new_elem->value = xpo->value;
        (*a) = (*a)->next_element;
        (*a)->prev_element  = xpo->last_element;
        (*a)->last_element = xpo->last_element;
        (*a)->last_element->next_element = (*a);
        (*a)->fist_element = (*a);
        (*a)->last_element->id = ((*a)->last_element->id) - 1;
        free(xpo);
        return (new_elem);
}

int swap_px(List **a, List **b)
{
        List *xpo;
        List *new_elem;

        new_elem = rm_first(a);
        if (!new_elem)
                return (ERRO);
        if (*b == 0)
        {
                (*b) = new_elem;
                (*b)->fist_element = (*b);
                (*b)->last_element = (*b);
                (*b)->next_element = (*b);
                (*b)->id = 0;
        }
        else
        {
                new_elem->next_element = (*b);
                (*b)->prev_element = new_elem;
                new_elem->last_element = (*b)->last_element;
                new_elem->prev_element = (*b)->last_element;
                (*b)->last_element->next_element = new_elem;
                new_elem->fist_element = new_elem;
                new_elem->last_element->id = (*b)->last_element->id + 1;
                (*b) = new_elem;
        }
        return (OK);
}
