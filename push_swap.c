/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-yama <zel-yama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/18 13:37:42 by kube              #+#    #+#             */
/*   Updated: 2025/02/08 21:15:06 by zel-yama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	function_calls(int argc, t_stack **a, t_stack **b)
{
	if (argc == 2)
		sort2_element(a);
	else if (argc == 3)
		sort3_element(a);
	else if (argc == 4)
		sort_4element(a, b);
	else if (argc == 5)
		sort_5elment(a, b);
}

// here the main fucntion 
// i should protect from null 
int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		i;
	int		x;

	if (argc == 1)
		return (1);
	(1) && (a = NULL, b = NULL, i = 0, x = 0);
	a = parsing(argv);
	if (is_sorted(a) == 0)
		return (0);
	if (stack_size(a) <= 5)
		function_calls(stack_size(a), &a, &b);
	else
		(fillstack_b(&a, &b, i, x), sort_stack_a(&a, &b));
	(free_stack(a), free(b));
	b = NULL;
}
