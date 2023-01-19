#include "push_swap.h"
#include <stdio.h>
void add_element(int element, stack *list_elements)
{
    while (list_elements->number != 0)
    {
        printf("OLA");
        list_elements = list_elements->next_number;
    }
    list_elements = malloc(sizeof(stack));
    list_elements->number = element;
}
int main(int argc, char **argv)
{
    
    stack a, *apt = &a;

    add_element(1, apt);
    add_element(1, apt);
    printf("%i\n", a.number);
    printf("%i\n", a.next_number->number);

    return (0);
}
