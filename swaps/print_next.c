#include "../swap_h/push_swap.h"

void print_next(List **lis)
{
	List *ptr;

	ptr = *lis;
	ft_printstr("\n=======≠========≠======≠\n");
	ft_printstr("    ORDEM CRESCENTE\n");
	ft_printstr("=======≠========≠======≠\n");
	while(ptr != 0)
	{
		ft_printstr("id: ");
		ft_printnbr(ptr->id);
		ft_printstr(" value: ");
		ft_printnbr(ptr->value);
		ft_printstr("\n");
		ptr = ptr->next_element;
	}
	ft_printstr("=======≠========≠======≠\n\n");
}
