#include "push_swap.h"

void fillstack_b(t_stack **a, t_stack **b)
{
	int i;
	int x;
	int size;

	size = stack_size(*a);
	i = 0;
	if(size <= 100)
		x = 16;
	else
		x = 32;
	while ((*a))
	{
		if ((*a)->index <= i)
		{
			push_b(b, a);
			i++;
		}
		else if ((*a)->index <= i + x)
		{
			(push_b(b, a), rotate_b(b));
			i++;
		}
		else
			rotate_a(a);
	}
}

/*find max index place to known to put it in stack first and mark position to decide if you will  reverse to reach it 
or you rotate and rotate to reach if you find put in top stack and push it so 
to known it is he on top or the bottom divide the size by two and compare it by position if greater than he is in heigher part else he is lower part 

*/
void sort_stack_a(t_stack **a, t_stack **b)
{
	int	size;
	int	maxindex;
	int maxposition;

	while ((*b))
	{
		size = stack_size(*b);
		(*b) = mark_position((*b));
		maxindex = find_max(*b, &maxposition);
		if (size == 1)
		{
			push_a(a, b);
			return ;
		}
	  	else if (maxposition <= size/2)
		{
			while (maxindex != (*b)->index)
				rotate_b(b);
			if (maxindex == (*b)->index)
				push_a(a, b);
		}
		else if (maxposition >= size/2)
		{
			while(maxindex != (*b)->index)
				reverse_b(b);
			if (maxindex == (*b)->index)
				push_a(a, b);
		}
	}
}
