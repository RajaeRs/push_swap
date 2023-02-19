/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 23:34:49 by rrasezin          #+#    #+#             */
/*   Updated: 2023/02/18 18:09:23 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_sorted(t_stack *data)
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
			if (data->data[j] > tmp)
				return (1);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (0);
}

int	is_rev_sorted(t_stack *data)
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
			if (data->data[j] < tmp)
				return (1);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (0);
}
