#ifndef _PUSH_SWAP_H
#define _PUSH_SWAP_H
#include<stdio.h>
#include<stdlib.h>

typedef struct List{
        int value;
        struct List *next_element;
	struct List *last_element;
	struct List *fist_element;
}List;

void p_value_last();

#endif 
