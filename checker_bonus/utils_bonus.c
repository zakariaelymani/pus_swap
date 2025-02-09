/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-yama <zel-yama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:09:57 by zel-yama          #+#    #+#             */
/*   Updated: 2025/02/09 12:41:14 by zel-yama         ###   ########.fr       */
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

long	*sort_array(long *array, int len)
{
	int		i;
	int		j;
	long	tmp;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (array[i] < array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (array);
}

t_stack	*fill_index(long *array, t_stack *a, int len)
{
	int		j;
	t_stack	*tmp;

	j = 0;
	array = sort_array(array, len);
	while (j < len)
	{
		tmp = a;
		while (tmp)
		{
			if (array[j] == tmp->data)
			{
				tmp->index = j;
			}
			tmp = tmp->next;
		}
		j++;
	}
	return (a);
}
