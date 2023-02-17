#ifndef _PUSH_SWAP_H
#define _PUSH_SWAP_H
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

int small_in_first(List **a);
void swap_add(List **a, int value);
int is_order(List **a);
int swap_rx(List **x, char *str);
int swap_rr(List **a, List **b);
int swap_sx(List **x, char *str);
int swap_ss(List **a, List **b);
int swap_px(List **a, List **b, char *str);
void print_next(List **lis);
void print_prev(List **list);
int	ft_printnbr(int nb);
size_t	ft_printstr(char *str);
size_t	ft_strlen(const char *s);
int	ft_atoi(const char *str);
#endif 
