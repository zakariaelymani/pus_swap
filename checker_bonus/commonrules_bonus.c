/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commonrules_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-yama <zel-yama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:09:16 by zel-yama          #+#    #+#             */
/*   Updated: 2025/02/09 18:28:25 by zel-yama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ss_rules(t_stack **a, t_stack **b)
{
	swap_a(a);
	swap_b(b);
}

void	rr_rules(t_stack **a, t_stack **b)
{
	rotate_a(a);
	rotate_b(b);
}

void	rrr_rules(t_stack **a, t_stack **b)
{
	reverse_a(a);
	reverse_b(b);
}
