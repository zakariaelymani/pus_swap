/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortsmallnumber.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-yama <zel-yama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:09:49 by zel-yama          #+#    #+#             */
/*   Updated: 2025/02/08 22:42:15 by zel-yama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort2_element(t_stack **a)
{
	if ((*a)->data > (*a)->next->data)
		rotate_a(a);
	else
		return ;
}

int	is_sorted(t_stack *stack)
{
	t_stack	*tmp;

	if (!stack || !stack->next)
		return (0);
	tmp = stack;
	while (tmp)
	{
		if (tmp->next && tmp->data > tmp->next->data)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

void	sort3_element(t_stack **a)
{
	if (is_sorted(*a) == 0)
		return ;
	if ((*a)->data < (*a)->next->data && (*a)->data
		< (*a)->next->next->data)
		(swap_a(a), rotate_a(a));
	else if ((*a)->data < (*a)->next->data && (*a)->data
		> (*a)->next->next->data)
		(reverse_a(a));
	else if ((*a)->data > (*a)->next->data && (*a)->next->data
		> (*a)->next->next->data)
		(rotate_a(a), swap_a(a));
	else if ((*a)->data > (*a)->next->data && (*a)->data
		> (*a)->next->next->data)
		(rotate_a(a));
	else if ((*a)->data > (*a)->next->data && (*a)->data
		< (*a)->next->next->data)
		(swap_a(a));
	else
		return ;
}

void	sort_4element(t_stack **a, t_stack **b)
{
	if (is_sorted(*a) == 0)
		return ;
	while (1)
	{
		if ((*a)->data < (*a)->next->data && (*a)->data
			< (*a)->next->next->data && (*a)->data
			< (*a)->next->next->next->data)
		{
			(push_b(b, a), sort3_element(a), push_a(a, b));
			break ;
		}
		else if ((*a)->data > (*a)->next->data && (*a)->data
			> (*a)->next->next->data && (*a)->data
			> (*a)->next->next->next->data)
		{
			(push_b(b, a), sort3_element(a), push_a(a, b), rotate_a(a));
			break ;
		}
		rotate_a(a);
	}
}

void	sort_5elment(t_stack **a, t_stack **b)
{
	if (is_sorted(*a) == 0)
		return ;
	while (1)
	{
		if ((*a)->data < (*a)->next->data && (*a)->data
			< (*a)->next->next->data && (*a)->data
			< (*a)->next->next->next->data && (*a)->data
			< (*a)->next->next->next->next->data)
		{
			(push_b(b, a), sort_4element(a, b), push_a(a, b));
			break ;
		}
		else if ((*a)->data > (*a)->next->data && (*a)->data
			> (*a)->next->next->data && (*a)->data
			> (*a)->next->next->next->data && (*a)->data
			> (*a)->next->next->next->next->data)
		{
			(push_b(b, a), sort_4element(a, b), push_a(a, b), rotate_a(a));
			break ;
		}
		rotate_a(a);
	}
}
