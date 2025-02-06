/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-yama <zel-yama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:08:53 by zel-yama          #+#    #+#             */
/*   Updated: 2025/02/06 16:31:18 by zel-yama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static const char	*sikpit(const char *str, int *sing)
{
	int	i;

	i = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			*sing *= -1;
		i++;
	}
	return (&str[i]);
}

long	ft_atoi(const char	*str)
{
	int			i;
	int			sing;
	long		res;
	long		temp;

	temp = 0;
	sing = 1;
	res = 0;
	i = 0;
	str = sikpit(str, &sing);
	if (str[0] == '\0')
		return (21474836478);
	while (str[i])
	{
		if(ft_isdigit(str[i]) == 0)
			return (21474836478);
		res = res * 10 + (str[i] - '0');
		if (temp > res && sing == 1)
			return (-1);
		else if (temp > res && sing == -1)
			return (0);
		temp = res;
		i++;
	}
	return (res * sing);
}
