
#include "push_swap.h"

int main()
{
	t_stack *a = (t_stack *)malloc(sizeof(t_stack));
	a->data = 3;
	t_stack *node = (t_stack *)malloc(sizeof(t_stack));
	node->data = 4;
	a->next = node;
	t_stack *node2 = (t_stack *)malloc(sizeof(t_stack));
	node2->data = 5;
	node->next = node2;
	t_stack *node3 = (t_stack *)malloc(sizeof(t_stack));
	node3->data = 7;
	node2->next = node3;
	node3->next = NULL;
	t_stack *b = (t_stack *)malloc(sizeof(t_stack));
	b->data = 35;
	t_stack *n1 = (t_stack *)malloc(sizeof(t_stack));
	n1->data = 46;
	b->next = n1;
	t_stack *n2 = (t_stack *)malloc(sizeof(t_stack));
	n2->data = 55;
	n1->next = n2;
	t_stack *n3 = (t_stack *)malloc(sizeof(t_stack));
	n3->data = 78;
	n2->next = n3;
	n3->next = NULL;
}