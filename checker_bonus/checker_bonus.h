/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-yama <zel-yama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 10:06:05 by zel-yama          #+#    #+#             */
/*   Updated: 2025/02/10 10:14:55 by zel-yama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include "unistd.h"
# include "stdlib.h"

typedef struct s_stack
{
	int				index;
	int				data;
	struct s_stack	*next;
}	t_stack;

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
int		is_sorted(t_stack *stack);
int		stack_size(t_stack *stack_tocount);
size_t	ft_strlen(const char *s);
long	ft_atoi(const char	*str);
int		ft_isalpha(int c);
void	ft_putstr_fd(char *s, int fd);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);
char	**ft_split(char const *s, char c);
int		ft_isdigit(int c);
void	free_stack(t_stack *head);
char	*mini_get_line(void);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	ss_rules(t_stack **a, t_stack **b);
void	rr_rules(t_stack **a, t_stack **b);
void	rrr_rules(t_stack **a, t_stack **b);

#endif