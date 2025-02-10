/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-yama <zel-yama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:09:57 by zel-yama          #+#    #+#             */
/*   Updated: 2025/02/10 09:58:26 by zel-yama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	free_stack(t_stack *head)
{
	t_stack	*tmp;

	if (!head)
		return ;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
		tmp = NULL;
	}
}

t_stack	*new_node(int content)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->data = content;
	node->next = NULL;
	return (node);
}

t_stack	*fill_stack(long *array, int len)
{
	t_stack	*a;
	t_stack	*tmp;
	int		i;

	a = new_node((int)array[0]);
	if (!a)
		return (NULL);
	i = 1;
	tmp = a;
	while (i < len)
	{
		a->next = new_node((int)array[i]);
		if (!a->next)
			return (NULL);
		a = a->next;
		i++;
	}
	return (tmp);
}
