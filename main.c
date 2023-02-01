#include "push_swap.h"

void t(List **a, int value)
{
	List	*ptr;

	ptr = (List *) malloc(sizeof(List));
	if (ptr ==0)
		return;
	ptr->value = value;
	if(*a == 0)
	{
		(*a) = ptr;
		(*a)->fist_element = ptr;
		(*a)->last_element = ptr;
		(*a)->next_element = 0;
		printf("Primeiro elemento a inserir\n");
		return ;
	}
	(*a)->last_element->next_element = ptr;
	(*a)->last_element = ptr;

}

void in(List **lis)
{
	List *ptr;

	ptr = *lis;
	while(ptr != 0)
	{
		printf("%i\n", ptr->value);
		ptr = ptr->next_element;
	}
}

int main()
{
	struct List m, *a, *b;
	a = 0;
	b = 0;
	t(&a, 18);
	t(&a, 618);
	t(&a, 8);
	t(&a, 2);
	in(&a);
	return 0;
}


