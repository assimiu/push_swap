#include "push_swap.h"

int main()
{
	struct List *m, *a, *b;
	a = 0;
	b = 0;
	add_element(&b, 20);
	add_element(&b, 30);
	add_element(&b, 40);
	m = malloc(sizeof(List));

	print_prev(&b);
	return 0;
}



