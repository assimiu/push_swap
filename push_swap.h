#ifndef _PUSH_SWAP_H
#define _PUSH_SWAP_H
#include<stdio.h>
#include<stdlib.h>

typedef struct List{
        int value;
        int id;
        struct List *next_element;
	struct List *last_element;
	struct List *fist_element;
        struct List *prev_element;
}List;

void add_element(List **a, int value);
void print_elements(List **lis);

#endif 
