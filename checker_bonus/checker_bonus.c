/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-yama <zel-yama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 10:40:26 by zel-yama          #+#    #+#             */
/*   Updated: 2025/02/10 10:09:59 by zel-yama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

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

int	check_moves(char *moves, t_stack **a, t_stack **b)
{
	if (ft_strncmp(moves, "sa\n", ft_strlen(moves)) == 0)
		swap_a(a);
	else if (ft_strncmp(moves, "ra\n", ft_strlen(moves)) == 0)
		rotate_a(a);
	else if (ft_strncmp(moves, "rra\n", ft_strlen(moves)) == 0)
		reverse_a(a);
	else if (ft_strncmp(moves, "pa\n", ft_strlen(moves)) == 0)
		push_a(a, b);
	else if (ft_strncmp(moves, "sb\n", ft_strlen(moves)) == 0)
		swap_b(b);
	else if (ft_strncmp(moves, "pb\n", ft_strlen(moves)) == 0)
		push_b(b, a);
	else if (ft_strncmp(moves, "rb\n", ft_strlen(moves)) == 0)
		rotate_b(b);
	else if (ft_strncmp(moves, "rrb\n", ft_strlen(moves)) == 0)
		reverse_b(b);
	else if (ft_strncmp(moves, "ss\n", ft_strlen(moves)) == 0)
		ss_rules(a, b);
	else if (ft_strncmp(moves, "rr\n", ft_strlen(moves)) == 0)
		rr_rules(a, b);
	else if (ft_strncmp(moves, "rrr\n", ft_strlen(moves)) == 0)
		rrr_rules(a, b);
	else
		return (1);
	return (0);
}

void	check_is_status(t_stack *a, t_stack *b)
{
	if (is_sorted(a) == 0 && !b)
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	*moves;

	(1) && (a = NULL, b = NULL);
	if (argc == 1)
		return (0);
	a = parsing(argv);
	if (!a)
		return (1);
	while (1)
	{
		moves = mini_get_line();
		if (!moves)
			return (free_stack(a), 1);
		if (!*moves)
			break ;
		if (check_moves(moves, &a, &b) == 1)
			(free(moves), free_stack(a), free_stack(b),
				ft_putstr_fd("Error\n", 2), exit(1));
		free(moves);
	}
	check_is_status(a, b);
	(free(moves), free_stack(a), free(b));
	return (0);
}
