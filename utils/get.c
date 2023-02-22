/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 20:19:04 by rrasezin          #+#    #+#             */
/*   Updated: 2023/02/22 04:57:04 by rrasezin         ###   ########.fr       */
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
	if ( j >= 2)
	{
		while (++j < stack->size)
			rotate(stack, "ra");
	}
	else if ( j < 2)
	{
		while (j-- >= 0)
			rev_rotate(stack, "rra");
	}
	return ;
}

t_stack	get_copy(t_stack *stack)
{
	int	i;
	t_stack	copy;

	i = 0;
	copy.data = malloc(sizeof(int) * stack->size);
	copy.size = stack->size;
	copy.top = stack->top;
	while (i < stack->size)
	{
		copy.data[i] = stack->data[i];
		i++;
	}
	return (copy);
}

void	get_chunks(t_cpy_stack *copy, int box)
{
	int	i;
	int	size;
	int s_box;

	i = (box * 2);
	copy->ck_size = i;
	size = copy->size - 1;
	s_box = copy->size / (box * 2);
	copy->chunks = malloc(sizeof(int) * i);
	while (i > 0)
	{
		copy->chunks[i] = copy->data.data[size];
		size -= s_box;
		i--;
	}
	copy->chunks[i] = copy->data.data[0];
	return ;
}