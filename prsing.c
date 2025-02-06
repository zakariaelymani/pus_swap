


#include "push_swap.h"

void free_while(char **matrix)
{
	int i;

	i = 0;
	while (matrix[i])
	{
		free(matrix[i]);
		matrix[i] = NULL;
		i++;
	}
	free(matrix);
	
}
int check_numbers(long *array, int len)
{
	int i;
	int j;
	
	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (array[i] == array[j] )
				return (1);
			j++;
		}
		i++;
	}
	i = 0;
	while(i < len)
	{
		if(array[i] > 2147483647 || array[i] < -2147483648)
			return (1);
		i++;
	}
	return (0);	
}

long	*fill_array(char **splited, int len)
{
	int i;
	long *array;

	array = (long *)malloc(sizeof(long) * len);
	if(!array)
		return (NULL);
	i = 0;
	while (splited[i])
	{
		array[i] = ft_atoi(splited[i]);
		i++;
	}

	return (array);
}

char **join_and_splited(char **args)
{
	char *joined;
	char **splited;
	int	i;

	i = 1;
	joined = NULL;
	while (args[i])
	{
		if (args[i][0] == '\0')
			(ft_putstr_fd("ERROR", 2), exit(1));
		
		joined = ft_strjoin(joined, " ");
		joined = ft_strjoin(joined, args[i]);
		i++;
	}
	splited = ft_split(joined, ' ');
	free(joined);
	return (splited);
}

t_stack *parsing(char **args)
{
	long *array;
	char **numbres;
	int len;
	int i;
	t_stack *a;

	numbres = join_and_splited(args);
	len = 0;
	while (numbres[len])
		len++;
	array = fill_array(numbres, len);
	i = 0;
	free_while(numbres);
	if (check_numbers(array, len) == 1)
		(free(array), ft_putstr_fd("ERROR", 2), exit(1));
	a = fill_stack(array, len);
	a = fill_index(array, a, len);
	return (a);
}

