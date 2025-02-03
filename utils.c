#include "push_swap.h"

void free_stack(t_stack *head)
{
	t_stack *tmp;

	while(head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	
}

t_stack *new_node(int content)
{
	t_stack *node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if(!node)
		return (NULL);
	node->data = content;
	node->next = NULL;
	return(node); 
}
t_stack *fill_stack(long *array, int len)
{
	t_stack *a;
	t_stack *tmp;
	int i;

	
	a = new_node((int)array[0]);
	i = 1;
	tmp = a;
	while(i < len)
	{
		a->next = new_node((int)array[i]);
		if(!a->next)
			return(NULL);
		a = a->next;
		i++;
	}
	return (tmp);
}