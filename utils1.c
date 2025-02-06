#include "push_swap.h"

int stack_size(t_stack *stack_tocount)
{
	int		i;
	t_stack *tmp;

	tmp = stack_tocount;
	i = 0;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

int find_max(t_stack *b, int *position)
{
	t_stack *tmp;
	int		tmep;

	tmp = b;
	tmep = tmp->index;
	*position = tmp->postion;
	tmp = tmp->next;
	while(tmp)
	{
		if (tmep < tmp->index)
		{
			tmep = tmp->index;
			*position = tmp->postion;
		}
		tmp = tmp->next;
	}
	return (tmep);
}

t_stack* mark_position(t_stack *stack)
{
	int i;
	t_stack *tmp;

	i = 0;
	tmp = stack;
	while (tmp)
	{
		tmp->postion = i;
		i++;
		tmp = tmp->next;
	}
	return (stack);
}