/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 20:19:04 by rrasezin          #+#    #+#             */
/*   Updated: 2023/03/05 06:11:30 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	get_min_to_top(t_stack *stack)
{
	int	i;
	int	j;

	i = stack->size;
	j = 0;
	while (--i >= 1)
	{
		if (stack->data[i] < stack->data[i - 1])
		{
			if (stack->data[i] < stack->data[j])
				j = i;
		}
	}
	if (j >= 2)
	{
		while (++j < stack->size)
			rotate(stack, "ra");
	}
	else if (j < 2)
	{
		while (j-- >= 0)
			rev_rotate(stack, "rra");
	}
	return ;
}

void	get_copy(t_stack *stack, int *copy)
{
	int	i;

	i = 0;
	while (i < stack->size)
	{
		copy[i] = stack->data[i];
		i++;
	}
	return ;
}

void	get_chunks(t_cpy_stack *copy, int box, int *chunks)
{
	int	i;
	int	size;
	int	s_box;

	i = (box * 2);
	copy->ck_size = i;
	size = copy->size - 1;
	s_box = copy->size / (box * 2);
	while (i > 0)
	{
		chunks[i] = copy->data[size];
		size -= s_box;
		i--;
	}
	chunks[i] = copy->data[0];
	return ;
}
