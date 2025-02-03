
#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "libft/libft.h"
#include "stdio.h"
#include "unistd.h"
#include "stdlib.h"

typedef struct s_stack
{
	int				data;
	struct s_stack 	*next;
} t_stack;

void swap_b(t_stack **b);
void push_a(t_stack **a, t_stack **b);
void swap_a(t_stack **a);
t_stack *parsing(char **args);
void rotate_b(t_stack **b);
void push_b(t_stack **b, t_stack **a);
void rotate_b(t_stack **b);
void rotate_a(t_stack **a);
void reverse_b(t_stack **b);
void reverse_a(t_stack **a);
t_stack *fill_stack(long *array, int len);
#endif