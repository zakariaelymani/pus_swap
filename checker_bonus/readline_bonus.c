/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readline_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-yama <zel-yama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 10:27:25 by zel-yama          #+#    #+#             */
/*   Updated: 2025/02/09 16:36:51 by zel-yama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int check_new_line(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (0);
		i++;
	}
	return (1);
}

char *mini_get_line()
{
	char	buffer[1820];
	char	*joined;
	int		i;

	joined = NULL;
	while (1)
	{
		free(joined);
		i = read(0, buffer, 1);
		buffer[i] = '\0';
		joined = ft_strjoin(joined, buffer);
		if (!joined)
			return (NULL);
		if (check_new_line(joined) == 0)
			break;
		if (!*joined)
			break;
	}
	return (joined);
}
