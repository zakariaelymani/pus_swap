/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-yama <zel-yama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/18 13:37:42 by kube              #+#    #+#             */
/*   Updated: 2025/02/06 12:41:06 by zel-yama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


// here the main fucntion 
// i should protect from null 
int main(int argc, char **argv)
{
	t_stack *a;
	t_stack *b;

	if (argc == 1)
		return (1);
	a = NULL;
	b = NULL;
	a = parsing(argv);
	if (argc == 3)
		sort2_element(&a);
	if (argc == 4)
		sort3_element(&a);
	if (argc == 5)
		sort_4element(&a, &b);
	if (argc == 6)
		sort_5elment(&a, &b);
	else
	{
		fillstack_b(&a, &b);
		//  while(b)
		// {
		// 	printf(" %d\n",b->data);
		// 	b = b->next;
		// }
		sort_stack_a(&a, &b);
	}
	// while(a)
	// {
	// 	printf(" %d\n",a->data);
	// 	a = a->next;
	// }

}
