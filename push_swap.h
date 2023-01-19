#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include<stdlib.h>
typedef struct stack
{
    int number;
    struct stack *next_number;
} stack;
void add_element(int element, stack *list_elements);
#endif