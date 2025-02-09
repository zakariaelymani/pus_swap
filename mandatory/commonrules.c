/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commonrules.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-yama <zel-yama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:09:16 by zel-yama          #+#    #+#             */
/*   Updated: 2025/02/09 18:18:19 by zel-yama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **b)
{
	t_stack	*tmp;

	if (!b || !(*b) || !(*b)->next)
		return ;
	tmp = (*b)->next;
	(*b)->next = tmp->next;
	tmp->next = (*b);
	(*b) = tmp;
}

void	reverse(t_stack **b)
{
	t_stack	*tmp;
	t_stack	*beforelast;
	t_stack	*last;

	if (!b || !(*b) || !(*b)->next)
		return ;
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

void	ss_rules(t_stack **a, t_stack **b)
{
	ft_putstr_fd("ss\n", 1);
	swap(a);
	swap(b);
}

void	rr_rules(t_stack **a, t_stack **b)
{
	ft_putstr_fd("rr\n", 1);
	rotate(a);
	rotate(b);
}

void	rrr_rules(t_stack **a, t_stack **b)
{
	ft_putstr_fd("rrr\n", 1);
	reverse(a);
	reverse(b);
}
