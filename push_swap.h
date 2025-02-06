

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "stdio.h"
#include "unistd.h"
#include "stdlib.h"

typedef struct s_stack
{
	int				index;
	int				postion;
	int				data;
	struct s_stack 	*next;
} t_stack;

void	swap_b(t_stack **b);
void	push_a(t_stack **a, t_stack **b);
void	swap_a(t_stack **a);
t_stack	*parsing(char **args);
void	rotate_b(t_stack **b);
void	push_b(t_stack **b, t_stack **a);
void	rotate_b(t_stack **b);
void	rotate_a(t_stack **a);
void	reverse_b(t_stack **b);
void	reverse_a(t_stack **a);
t_stack	*fill_stack(long *array, int len);
void	sort_4element(t_stack **a, t_stack **b);
void	sort3_element(t_stack **a);
int		is_sorted(t_stack *stack);
void	sort2_element(t_stack **a);
void	sort_5elment(t_stack **a, t_stack **b);
t_stack	*fill_index(long *array, t_stack *a, int len);
int		stack_size(t_stack *stack_tocount);
t_stack	*mark_position(t_stack *stack);
int		find_max(t_stack *b, int *position);
void	fillstack_b(t_stack **a, t_stack **b);
void	sort_stack_a(t_stack **a, t_stack **b);
size_t	ft_strlen(const char *s);
long	ft_atoi(const char	*str);
int		ft_isalpha(int c);
void	ft_putstr_fd(char *s, int fd);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);
char	**ft_split(char const *s, char c);
int		ft_isdigit(int c);

#endif