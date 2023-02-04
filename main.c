#include "push_swap.h"

int main()
{
	struct List *m, *a, *b;
	a = 0;
	b = 0;
	add_element(&b, 20);
	add_element(&b, 30);
	add_element(&b, 40);
	add_element(&b, 50);
	add_element(&b, 60);
	add_element(&b, 70);

	List *ptr_n, *ptr_p, *temp_p, *temp_n;

        ptr_p = b->last_element;
	ptr_n = b;

        while(ptr_n != ptr_p && ptr_n != ptr_p->prev_element)
        {
		printf("\nvalueN: %i valueP:%i\n", ptr_n->value, ptr_p->value);
                ptr_p = ptr_p->prev_element;
		ptr_n = ptr_n->next_element;

//		temp_p = ptr_p->next_element->next_element;
//		temp_n = ptr_n->prev_element->prev_element;

//		ptr_p->next_element->next_element = temp_n;
//		ptr_p->next_element->prev_element
		sleep(1);
        }
	printf("\nvalueN: %i valueP:%i\n", ptr_n->value, ptr_p->value);

//	swap_px(&b, &a);
//	swap_px(&b, &a);
//	swap_px(&b, &a);

//	swap_sx(&a);
//	print_next(&(b));
//	print_prev(&(a->last_element));


//	add_element(&b, 15);

//	print_next(&(b));
//      print_prev(&(b->last_element));

//	printf("last element %i\n", b->last_element->value);
//	printf("fist element %i\n", b->fist_element->value);
//	List *o = malloc(sizeof(List));
//	o->value = 10;
//	List *p = malloc(sizeof(List));
//	p->value = 581;
//	p->next_element = o;
//	free(p);
//	printf("%i\n", (o)->value);
	return 0;
}



