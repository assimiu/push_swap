#ifndef _PUSH_SWAP_H
#define _PUSH_SWAP_H
#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>

typedef struct List{
        int value;
        int id;
        struct List *next_element;
	struct List *last_element;
	struct List *fist_element;
        struct List *prev_element;
}List;

int swap_sx(List **x);
int swap_ss(List **a, List **b);
void add_element(List **a, int value);
void print_elements(List **lis);

#endif 
