#include <stdio.h>
#include<stdlib.h>
typedef struct stack
{
    int number;
    int posicon;
    struct stack *next_number;
    struct stack *previus_number;
} stack;
static int posicon;
void add_element(int element, stack **list_elements)
{
    stack *nova;

    nova = malloc(sizeof(stack));
    nova->number = element;
    if ((*list_elements) == NULL)
    {
        (*list_elements) = nova;
        (*list_elements)->previus_number = nova;
    }
    else {
        nova->previus_number = (*list_elements)->previus_number;
        (*list_elements)->previus_number = nova;
        nova->next_number = (*list_elements);
        (*list_elements) = nova;
    }
}
int main(int argc, char **argv)
{
    
    stack *apt;
    
    add_element(1, &apt);
    add_element(2, &apt);
    add_element(4, &apt);

    printf("%i  posi:%i \n", apt->next_number->number, apt->posicon);



    printf("%i  posi:%i \n", apt->previus_number->previus_number->number, apt->posicon);
    printf("%i  posi:%i \n", apt->previus_number->previus_number->previus_number->number, apt->posicon);
    printf("%i  posi:%i \n", apt->previus_number->previus_number->previus_number->previus_number->number, apt->posicon);
    printf("%i  posi:%i \n", apt->previus_number->previus_number->previus_number->previus_number->previus_number->number, apt->posicon);
    printf("%i  posi:%i \n", apt->previus_number->previus_number->previus_number->previus_number->previus_number->previus_number->number, apt->posicon);
    
    //printf("%i\n", apt->number);
    //printf("%i\n", apt->next_number->number);

    return (0);
}
