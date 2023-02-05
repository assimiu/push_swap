#ifndef _PUSH_SWAP_H
#define _PUSH_SWAP_H
#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#define ERRO -1
#define OK_S 2
#define OK_R 3
#define OK_P 4


typedef struct List{
        int value;
        int id;
        struct List *next_element;
	struct List *last_element;
	struct List *fist_element;
        struct List *prev_element;
}List;

int swap_rx(List **x);
int swap_rr(List **a, List **b);
int swap_sx(List **x);
int swap_ss(List **a, List **b);
int swap_px(List **a, List **b);
void add_element(List **a, int value);
void print_next(List **lis);
void print_prev(List **list);
#endif 