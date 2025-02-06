


#include "push_swap.h"

void ss_rules(t_stack **a, t_stack **b)
{
	ft_putstr_fd("ss\n",1);
	swap_a(a);
	swap_b(b);	
}
void rr_rules(t_stack **a, t_stack **b)
{
	ft_putstr_fd("rr\n",1);
	rotate_a(a);
	rotate_b(b);
}
void rrr_rules(t_stack **a, t_stack **b)
{
	ft_putstr_fd("rrr\n",1);
	reverse_a(a);
	reverse_b(b);
}