
#include "push_swap.h"

void swap_a(t_stack **a)
{
	t_stack *tmp;
	if(!a || !(*a) || !(*a)->next)
		return ;
	ft_putstr_fd("sa\n",1);
	tmp = (*a)->next; 
    (*a)->next = tmp->next;    
    tmp->next = (*a);     
    (*a) = tmp; 
}
void push_a(t_stack **a, t_stack **b)
{
	t_stack *tmp;
	if(!b || !(*b))
		return ;
	ft_putstr_fd("pa\n",1);
	tmp = *b;
	*b = (*b)->next;
	tmp->next = *a;
	(*a) = tmp;
}
t_stack *last_stack_a(t_stack *stack)
{
	t_stack *tmp;
	
	if(!stack)
		return (NULL);
	tmp = stack;
	while(tmp && tmp->next)
	{
		tmp = tmp->next;
	}
	return (tmp);
}
void rotate_a(t_stack **a)
{
	t_stack *tmp;
	t_stack *last;

	if(!a || !(*a) || !(*a)->next)
		return ;
	ft_putstr_fd("ra\n",1);
	tmp = (*a);
	(*a) = (*a)->next;
	last = last_stack_a(*a);
	last->next = tmp;
	tmp->next = NULL;
}

void reverse_a(t_stack **a)
{
	t_stack *tmp;
	t_stack *beforelast;
	t_stack *last;

	if(!a || !(*a) || !(*a)->next)
		return ;
	ft_putstr_fd("rra\n",1);
	tmp = (*a);
	beforelast = NULL;
	while (tmp->next->next)
		tmp = tmp->next;
	beforelast = tmp;
	last = tmp->next;
	beforelast->next = NULL;
	last->next = (*a);
	(*a) = last;	
}

