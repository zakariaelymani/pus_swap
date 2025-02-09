/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_rules_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-yama <zel-yama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 17:58:52 by zel-yama          #+#    #+#             */
/*   Updated: 2025/02/09 14:29:32 by zel-yama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	swap_a(t_stack **a)
{
	t_stack	*tmp;

	if (!a || !(*a) || !(*a)->next)
		return ;
	tmp = (*a)->next;
	(*a)->next = tmp->next;
	tmp->next = (*a);
	(*a) = tmp;
}

void	push_a(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (!b || !(*b))
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = *a;
	(*a) = tmp;
}

t_stack	*last_stack_a(t_stack *stack)
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

void	rotate_a(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!a || !(*a) || !(*a)->next)
		return ;
	tmp = (*a);
	(*a) = (*a)->next;
	last = last_stack_a(*a);
	last->next = tmp;
	tmp->next = NULL;
}

void	reverse_a(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*beforelast;
	t_stack	*last;

	if (!a || !(*a) || !(*a)->next)
		return ;
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
