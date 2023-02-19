/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:50:49 by rrasezin          #+#    #+#             */
/*   Updated: 2023/02/17 20:18:49 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_list(char **list)
{
	int	i;

	i = 0;
	while (list[i])
		free(list[i++]);
	free(list);
	return ;
}

int	check_data(char **list, t_stack *data, int size)
{
    int i;
	int	error;

    i = 0;
	error = 0;
	data->size = size;
	data->data = ft_calloc(sizeof(int), size);
	data->top = size - 1;
	while (size-- > 0)
	{
		data->data[i] = mini_atoi(list[size], &error);
		if (error == 1)
		{
			free(data->data);
			free_list(list);
			return (1);
		}
		i++;
	}
	free_list(list);
	i = 0;
	return (0);
}

int join_nb(int ac, char **av, t_stack *data)
{
    int		size;
	char	*data_list;
	char	**list;

	size = ac - 1;
    while (ac-- > 1)
    {
        if (av[ac][0] == '\0')
            return (1);
    }
	data_list = ft_calloc(2, sizeof(char));
	data_list[0] = ' ';
    while (ac++ < size)
		data_list = ft_strjoin(data_list, av[ac]); // good
	list = ft_split(data_list, ' ', &size); // is ok
	if (check_data(list, data, size) == 1)
		return (1);
	return (0);
}

int	check_double(t_stack *data)
{
	int	tmp;
	int	i;
	int j;

	i = 0;
	j = 1;
	while (i < data->size)
	{
		tmp = data->data[i];
		while (j < data->size)
		{
			if (data->data[j] == tmp)
			{
				free (data->data);
				return (1);
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	return (0);
}

int get_data(int ac, char **av, t_stack *data)
{
    if (ac == 1)
        return (1);
    if (join_nb(ac, av, data) != 0)
        return (2);
	if (check_double(data) != 0)
		return (2);
	return (0);
}