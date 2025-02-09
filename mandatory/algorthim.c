/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorthim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-yama <zel-yama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:08:53 by zel-yama          #+#    #+#             */
/*   Updated: 2025/02/08 23:27:47 by zel-yama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_disending(t_stack *a)
{
	int		count;
	t_stack	*tmp;
	int		size;

	tmp = a;
	count = 0;
	size = stack_size(tmp);
	while (tmp)
	{
		if (tmp->next && tmp->data > tmp->next->data)
			count++;
		tmp = tmp->next;
	}
	if (count > size - (size / 3) - (size / 10))
		return (0);
	else
		return (1);
}

int	check_x(int x, t_stack *a)
{
	int	size;

	size = stack_size(a);
	if (size <= 100)
		x = 16;
	else
		x = 32;
	return (x);
}

void	fillstack_b(t_stack **a, t_stack **b, int i, int x)
{
	int	cas;

	x = check_x(x, *a);
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
		{
			cas = check_disending(*a);
			if (cas == 0)
				reverse_a(a);
			else
				rotate_a(a);
		}
	}
}

void	sort_stack_a(t_stack **a, t_stack **b)
{
	int	size;
	int	maxindex;
	int	maxposition;

	while ((*b))
	{
		(1) && (size = stack_size(*b), (*b) = mark_position((*b)));
		maxindex = find_max(*b, &maxposition);
		if (size == 1)
			push_a(a, b);
		else if (maxposition <= size / 2)
		{
			while (maxindex != (*b)->index)
				rotate_b(b);
			if (maxindex == (*b)->index)
				push_a(a, b);
		}
		else if (maxposition >= size / 2)
		{
			while (maxindex != (*b)->index)
				reverse_b(b);
			if (maxindex == (*b)->index)
				push_a(a, b);
		}
	}
}
