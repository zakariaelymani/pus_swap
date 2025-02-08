/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_rules.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-yama <zel-yama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:09:08 by zel-yama          #+#    #+#             */
/*   Updated: 2025/02/08 22:28:08 by zel-yama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_b(t_stack **b)
{
	t_stack	*tmp;

	if (!b || !(*b) || !(*b)->next)
		return ;
	ft_putstr_fd("sb\n", 1);
	tmp = (*b)->next;
	(*b)->next = tmp->next;
	tmp->next = (*b);
	(*b) = tmp;
}

void	push_b(t_stack **b, t_stack **a)
{
	t_stack	*tmp;

	if (!a || !(*a))
		return ;
	ft_putstr_fd("pb\n", 1);
	tmp = *a;
	*a = (*a)->next;
	tmp->next = *b;
	(*b) = tmp;
}

t_stack	*last_stack_b(t_stack *stack)
{
	t_stack	*tmp;

	if (!stack)
		return (NULL);
	tmp = stack;
	while (tmp && tmp->next)
	{
		tmp = tmp->next;
	}
	return (tmp);
}

void	rotate_b(t_stack **b)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!b || !(*b) || !(*b)->next)
		return ;
	ft_putstr_fd("rb\n", 1);
	tmp = (*b);
	(*b) = (*b)->next;
	last = last_stack_b(*b);
	last->next = tmp;
	tmp->next = NULL;
}

void	reverse_b(t_stack **b)
{
	t_stack	*tmp;
	t_stack	*beforelast;
	t_stack	*last;

	if (!b || !(*b) || !(*b)->next)
		return ;
	ft_putstr_fd("rrb\n", 1);
	tmp = (*b);
	beforelast = NULL;
	while (tmp->next->next)
		tmp = tmp->next;
	beforelast = tmp;
	last = tmp->next;
	beforelast->next = NULL;
	last->next = (*b);
	(*b) = last;
}
